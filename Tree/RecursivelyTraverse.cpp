#include <iostream>
using namespace std;
struct Tree {
  int element;
  Tree *left;
  Tree *right;
};
void PreOrder(Tree *T) {
  if (T) {
    std::cout << T->element << endl;
    PreOrder(T->left);
    PreOrder(T->right);
  }
}
void InOrder(Tree *T) {
  if (T) {
    InOrder(T->left);
    std::cout << T->element << endl;
    InOrder(T->right);
  }
}
void PostOrder(Tree *T) {
  if (T) {
    PostOrder(T->left);
    PostOrder(T->right);
    std::cout << T->element << endl;
  }
}