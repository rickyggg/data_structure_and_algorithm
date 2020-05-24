void shell(int *list, int n) {
  int j, d;
  for (d = n / 2; d > 0; d /= 2) {
    for (int i = d + 1; i <= n; i++) {
      if (list[i] < list[i - d]) {
        list[0] = list[i];
        for (j = i - d; j > 0 && list[0] < list[j]; j -= d)
          list[j + d] = list[j];
        list[j + d] = list[0];
      }
    }
  }
}