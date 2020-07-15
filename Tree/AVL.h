#include <algorithm>
#include <iostream>
using namespace std;
typedef struct Node *Tree;
struct Node {
  int Element;
  Tree Left;
  Tree Right;
};
Tree RotateLeft(Tree root) {
  Tree pivot = root->Right;
  root->Right = pivot->Left;
  pivot->Left = root;
  return pivot;
}
Tree RotateRight(Tree root) {
  Tree pivot = root->Left;
  root->Left = pivot->Right;
  pivot->Right = root;
  return pivot;
}
Tree RotateLeftRight(Tree root) {
  root->Left = RotateLeft(root->Left);
  return RotateRight(root);
}
Tree RotateRightLeft(Tree root) {
  root->Right = RotateRight(root->Right);
  return RotateLeft(root);
}
int GetHeight(Tree root) {
  if (root == nullptr)
    return -1;
  return max(GetHeight(root->Left), GetHeight(root->Right)) + 1;
}
Tree Insert(Tree root, int x) {
  if (root == nullptr) {
    root = new Node;
    root->Element = x;
    root->Left = root->Right = nullptr;
  } else if (x < root->Element) {
    root->Left = Insert(root->Left, x);
    if (GetHeight(root->Left) - GetHeight(root->Right) == 2) {
      if (x < root->Left->Element)
        root = RotateLeft(root);
      else
        root = RotateLeftRight(root);
    }
  } else if (x > root->Element) {
    root->Right = Insert(root->Right, x);
    if (GetHeight(root->Left) - GetHeight(root->Right) == -2)
      root =
          x > root->Right->Element ? RotateLeft(root) : RotateRightLeft(root);
  }
  return root;
}
int main() {
  int n, val;
  scanf("%d", &n);
  Tree root = nullptr;
  for (int i = 0; i < n; ++i) {
    scanf("%d", &val);
    root = Insert(root, val);
  }
  printf("%d", root->Element);
  return 0;
}