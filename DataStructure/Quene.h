struct Node {
  int Data;
  Node *Next;
};
typedef Node *Queue;
void Push(int X, Queue Q) {
  Queue Tmp = new Node;
  Tmp->Data = X;
  Tmp->Next = Q->Next;
  Q->Next = Tmp;
}