// O(N^2)
void shell(int *list, int n) {
  int j, d;
  int tmp;
  for (d = n / 2; d > 0; d /= 2) {
    for (int i = d; i < n; i++) {
      if (list[i] < list[i - d]) {
        tmp = list[i];
        for (j = i - d; j >= 0 && tmp < list[j]; j -= d)
          list[j + d] = list[j];
        list[j + d] = tmp;
      }
    }
  }
}