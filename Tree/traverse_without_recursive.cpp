struct TreeNode {
  int element;
  TreeNode *left;
  TreeNode *right;
};
void PreOrder2(TreeNode *root) {
  stack<TreeNode> s;
  while (root || !s.empty()) {
    if (root) {
      s.push(root);
      cout << root->element << " ";
      root = root->left;
    } else {
      root = s.top();
      s.pop();
      root = root->right;
    }
  }
}
void InOrder2(TreeNode *root) {
  stack<TreeNode> s;
  while (root || !s.empty()) {
    if (root) {
      s.push(root);
      root = root->left;
    } else {
      root = s.top();
      s.pop();
      cout << root->element << " ";
      root = root->right;
    }
  }
}
