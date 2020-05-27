// O(N log N)
void InsertSort(int *list, int left, int right) {
  int j;
  int temp;
  for (int i = left; i <= right; i++) {
    temp = list[i];
    for (j = i - 1; j >= 0 && list[j] > temp; j--)
      list[j + 1] = list[j];
    list[j + 1] = temp;
  }
}
int Median3(int *v, int left, int right) {
  int center = (left + right) / 2;
  if (v[left] > v[center])
    swap(v[left], v[center]);
  if (v[left] > v[right])
    swap(v[left], v[right]);
  if (v[center] > v[right])
    swap(v[center], v[right]);
  swap(v[center], v[right - 1]);
  return v[right - 1];
}
void QSort(int *v, int left, int right) {
  int i, j, pivot;
  if (left + 15 <= right) {
    pivot = Median3(v, left, right);
    i = left;
    j = right - 1;
    while (1) {
      while (v[++i] < pivot) {
      }
      while (v[--j] > pivot) {
      }
      if (i < j)
        swap(v[i], v[j]);
      else
        break;
    }
    swap(v[i], v[right - 1]);
    QSort(v, left, i - 1);
    QSort(v, i + 1, right);
  } else {
    InsertSort(v, left, right);
  }
}
