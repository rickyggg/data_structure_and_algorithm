// O(logN)
int BinarySearch(int *list, int value, int len) {
  int low = 0;
  int high = len - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (list[mid] > value) {
      high = mid - 1;
    } else if (list[mid] < value) {
      low = mid + 1;
    } else {
      return list[mid];
    }
  }
  return -1;
}