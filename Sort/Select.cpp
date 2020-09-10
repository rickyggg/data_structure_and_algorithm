// O(N^2)
void SelectSort(int *list, int len) {
  for (int i = 0; i < len; i++) {
    int min = i;
    for (int j = i; j < len; j++) {
      if (list[j] < list[min]) {
        min = j;
      }
    }
    swap(list[i], list[min]);
  }
}
