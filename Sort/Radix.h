// O(kN) LSD
#include <algorithm>
using namespace std;
int Max_bit(int *list, int len) {
  int max = *max_element(list, list + len);
  int d = 1;
  while (max != 0) {
    max /= 10;
    ++d;
  }
  return d;
}
void RadixSort(int *list, int len) {
  int d = Max_bit(list, len);
  int *temp = new int[len];
  int *count = new int[10];
  int i, j, k;
  int radix = 1;
  for (i = 1; i <= d; i++) {
    fill(count, count + 10, 0);
    for (j = 0; j < len; j++) {
      k = (list[j] / radix) % 10;
      count[k]++;
    }
    for (j = 1; j < 10; j++)
      count[j] = count[j - 1] + count[j];
    for (j = len - 1; j >= 0; j--) {
      k = (list[j] / radix) % 10;
      temp[--count[k]] = list[j];
    }
    for (j = 0; j < len; j++)
      list[j] = temp[j];
    radix *= 10;
  }
  delete[] temp;
  delete[] count;
}