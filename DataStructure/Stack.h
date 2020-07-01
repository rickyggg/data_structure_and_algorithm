struct Node {
  int Data;
  Node *Next;
};
typedef Node *Stack;
void Push(int X, Stack S) {
  Stack Tmp = new Node;
  Tmp->Data = X;
  Tmp->Next = S->Next;
  S->Next = Tmp;
}