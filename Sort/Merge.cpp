// O(N log N)
void Merge(int *list, int *tmp, int first, int mid, int last) {
  int i = first;
  int j = mid + 1;
  int k = first;
  while (i <= mid && j <= last) {
    if (list[i] < list[j]) {
      tmp[k++] = list[i++];
    } else {
      tmp[k++] = list[j++];
    }
  }
  while (i <= mid) {
    tmp[k++] = list[i++];
  }
  while (j <= last) {
    tmp[k++] = list[j++];
  }
  for (i = first; i <= last; i++) {
    list[i] = tmp[i];
  }
}
void MergeSortPart(int *list, int *tmp, int first, int last) {
  if (first >= last)
    return;
  int mid = first + (last - first) / 2;
  MergeSortPart(list, tmp, first, mid);
  MergeSortPart(list, tmp, mid + 1, last);
  Merge(list, tmp, first, mid, last);
}
void MergeSort(int *list, int len) {
  int *tmp = new int[len];
  MergeSortPart(list, tmp, 0, len - 1);
  delete[] tmp;
}