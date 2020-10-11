struct ListNode {
  int value;
  ListNode *next;
};
ListNode *ReverseList(ListNode *head) {
  if (head == nullptr || head->next == nullptr)
    return head;
  ListNode *new_head = ReverseList(head->next);
  head->next->next = head;
  head->next = nullptr;
  return new_head;
}
ListNode *successor = nullptr;
ListNode *ReverseK(ListNode *head, int k) {
  if (k == 1) {
    successor = head->next;
    return head;
  }
  ListNode *new_head = ReverseK(head->next, k - 1);
  head->next->next = head;
  head->next = successor;
  return new_head;
}
ListNode *ReverseBetween(ListNode *head, int l, int r) {
  if (l == 1)
    return ReverseK(head, r);
  head->next = ReverseBetween(head->next, l - 1, r - 1);
  return head;
}