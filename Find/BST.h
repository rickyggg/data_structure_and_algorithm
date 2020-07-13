// O(logn)
#include <iostream>
using namespace std;
struct TreeNode {
  int Element;
  TreeNode *Left;
  TreeNode *Right;
};
TreeNode *SearchBST(int x, TreeNode *T) {
  if (T == nullptr)
    return nullptr;
  if (x < T->Element)
    return SearchBST(x, T->Left);
  else if (x > T->Element)
    return SearchBST(x, T->Right);
  else
    return T;
}
TreeNode *FindMin(TreeNode *T) {
  if (T == nullptr)
    return nullptr;
  else if (T->Left == nullptr)
    return T;
  else
    return FindMin(T->Left);
}
TreeNode *Insert(int x, TreeNode *T) {
  if (T == nullptr) {
    T = new TreeNode;
    T->Element = x;
    T->Left->Right = nullptr;
  } else if (x < T->Element) {
    T->Left = Insert(x, T->Left);
  } else if (x > T->Element) {
    T->Right = Insert(x, T->Right);
  }
  return T;
}
TreeNode *Delete(int x, TreeNode *T) {
  TreeNode *Tmp;
  if (T == nullptr) {
    // error;
  } else if (x < T->Element) {
    T->Left = Delete(x, T->Left);
  } else if (x > T->Element) {
    T->Right = Delete(x, T->Right);
  } else if (T->Left && T->Right) {
    Tmp = FindMin(T->Right);
    T->Element = Tmp->Element;
    T->Right = Delete(T->Element, T->Right);
  } else { // one & zero children
    Tmp = T;
    if (T->Left == nullptr)
      T = T->Right;
    else
      T = T->Left;
    delete Tmp;
  }
  return T;
}