struct Node {
  int Data;
  Node *Next;
};
typedef Node *List;
int IsEmpty(List L) { return L->Next == nullptr; }
List FindPrevious(int X, List L) {
  List P;
  P = L;
  while (P->Next != nullptr && P->Next->Data != X)
    P = P->Next;
  return P;
}
void Delete(int X, List L) {
  List P, Tmp;
  P = FindPrevious(X, L);
  if (P->Next) {
    Tmp = P->Next;
    P->Next = Tmp->Next;
    delete Tmp;
  }
}
void Insert(int X, List L, List P) {
  List Tmp = new Node;
  Tmp->Data = X;
  Tmp->Next = P->Next;
  P->Next = Tmp;
}