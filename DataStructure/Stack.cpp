struct Node {
  int Data;
  Node *Next;
};
typedef Node *Stack;
int IsEmpty(Stack S) { return S->Next == nullptr; }
void Push(int X, Stack S) {
  Stack Tmp = new Node;
  Tmp->Data = X;
  Tmp->Next = S->Next;
  S->Next = Tmp;
}
int Pop(Stack S) {
  Stack Tmp = S->Next;
  if (IsEmpty(S)) {
    return -1;
  } else {
    int ans = S->Data;
    S = S->Next;
    delete Tmp;
    return ans;
  }
}