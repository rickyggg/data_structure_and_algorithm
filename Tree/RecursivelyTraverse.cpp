#include <iostream>
using namespace std;
struct Tree {
  int Element;
  Tree *Left;
  Tree *Right;
};
void PreOrder(Tree *T) {
  if (T != nullptr) {
    std::cout << T->Element << endl;
    PreOrder(T->Left);
    PreOrder(T->Right);
  }
}
void InOrder(Tree *T) {
  if (T != nullptr) {
    InOrder(T->Left);
    std::cout << T->Element << endl;
    InOrder(T->Right);
  }
}
void PostOrder(Tree *T) {
  if (T != nullptr) {
    PostOrder(T->Left);
    PostOrder(T->Right);
    std::cout << T->Element << endl;
  }
}