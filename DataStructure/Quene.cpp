static const int max = 10;
struct Node {
  int Data;
  Node *Next;
};
struct QNode {
  Node *Front, *Rear;
  int size;
};
typedef QNode *Queue;
bool IsFull(Queue Q) { return (Q->size == max); }
bool IsEmpty(Queue Q) { return (Q->size == 0); }
void Push(int X, Queue Q) {
  Node *Tmp = new Node;
  Tmp->Data = X;
  Tmp->Next = nullptr;
  if (IsFull(Q)) {
    // error;
  } else if (IsEmpty(Q)) {
    Q->Front = Q->Rear = Tmp;
  } else {
    Q->Rear->Next = Tmp;
    Q->Rear = Q->Rear->Next;
  }
  Q->size++;
}
int Pop(Queue Q) {
  Node *Tmp;
  int ans;
  if (IsEmpty(Q)) {
    return -1;
  } else {
    Tmp = Q->Front;
    if (Q->size == 1) {
      Q->Front = Q->Rear = nullptr;
    } else {
      Q->Front = Q->Front->Next;
    }
    ans = Tmp->Data;
    delete Tmp;
  }
  return ans;
}