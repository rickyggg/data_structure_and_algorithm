// O(N)
int SequentialSearch(int *list, int value, int len) {
  for (int i = 0; i < len; i++) {
    if (list[i] == value)
      return i;
  }
  return -1;
}