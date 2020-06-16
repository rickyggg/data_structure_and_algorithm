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