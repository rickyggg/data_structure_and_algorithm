struct TreeNode {
  int element;
  TreeNode *left;
  TreeNode *right;
};
void preOrder(TreeNode *root) {
  if (!root)
    return;
  stack<TreeNode *> s;
  s.push(root);
  while (!s.empty()) {
    TreeNode *p = s.top();
    s.pop();
    // do
    if (p->right)
      s.push(p->right);
    if (p->left)
      s.push(p->left);
  }
}
void InOrder2(TreeNode *root) {
  if (!root)
    return;
  stack<TreeNode *> s;
  TreeNode *p = root;
  while (!s.empty() || p) {
    while (p) {
      s.push(p);
      p = p->left;
    }
    if (!s.empty()) {
      p = s.top();
      s.pop();
      // do
      p = p->right;
    }
  }
}
