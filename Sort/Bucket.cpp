// O(n+m)
#include <algorithm>
#include <vector>
using namespace std;
void BucketSort(int *list, int len) {
  vector<int> b[10];
  for (int i = 0; i < len; i++) {
    int bi = list[i] / 10;
    b[bi].push_back(list[i]);
  }
  for (int i = 0; i < len; i++) {
    sort(b[i].begin(), b[i].end());
  }
  int index = 0;
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < b[i].size(); j++)
      list[index++] = b[i][i];
  }
}