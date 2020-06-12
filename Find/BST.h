// O(logn)
struct TreeNode {
  int Element;
  int *Left;
  int *Right;
};
int *Find(int x, TreeNode *T) {
  if (T = nullptr)
    return nullptr;
  if (x < T->Element)
    return Find(X, T->Left);
  else if (x > T->Element)
    return Find(X, T->Right);
  else
    return T;
}