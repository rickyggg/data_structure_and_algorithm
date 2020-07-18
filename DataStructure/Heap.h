typedef struct HeapStruct *PriorityQueue;
struct HeapStruct {
  int Capacity;
  int Size;
  int *Elements;
};
PriorityQueue Initialize(int MaxElements) {
  PriorityQueue H = new HeapStruct;
  H->Elements = new int[MaxElements + 1];
  H->Capacity = MaxElements;
  H->Size = 0;
  H->Elements[0] = -__INT_MAX__; // sentinel
  return H;
}
bool IsFull(PriorityQueue H) {
  if (H->Size == H->Capacity)
    return true;
  else
    return false;
}
bool IsEmpty(PriorityQueue H) {
  if (H->size == 0)
    return true;
  else
    return false;
}
void Insert(int x, PriorityQueue H) {
  int i;
  if (IsFull(H)) {
    // error;
    return;
  }
  for (i = ++H->Size; H->Elements[i / 2] > x; i /= 2)
    H->Elements[i] = H->Elements[i / 2];
  H->Elements[i] = x;
}
int DeleteMin(PriorityQueue H) {
  int i, Child;
  int MinElement, LastElement;
  if (IsEmpty(H)) {
    // error;
    return H->Elements[0];
  }
  MinElement = H->Elements[1];
  LastElement = H->Elements[H->Size--];
  for (i = 1; i * 2 <= H->Size; i = Child) {
    Child = i * 2;
    if (Child != H->Size && H->Elements[Child + 1] < H->Elements[Child])
      Child++;
    if (LastElement > H->Elements[Child])
      H->Elements[i] = H->Elements[Child];
    else
      break;
  }
  H->Elements[i] = LastElement;
  return MinElement;
}