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