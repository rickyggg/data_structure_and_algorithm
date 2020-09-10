// O(1)
#include <algorithm>
#include <cmath>
using namespace std;
int T_size;
int IsPrime(int n) {
  if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 1;
  } else {
    int k = sqrt(n);
    for (int i = 2; i <= k; i++)
      if (n % i == 0)
        return 0;
    return 1;
  }
}
int NextPrime(int n) {
  if (n == 1)
    return 2;
  int i, t = (n % 2) ? n + 2 : n + 1;
  while (1) {
    i = (int)sqrt(t);
    for (; i > 2; i--) {
      if (t % i == 0)
        break;
    }
    if (i == 2)
      return t;
    else
      t += 2;
  }
  return -1;
};
void Initial_HashTable(int *list, int T_size) { fill(list, list + T_size, 0); }
int Search_HashTable(int *list, int key) {
  int pos = key % T_size;
  int cnt = 0;
  while (cnt < T_size && list[pos] != key && list[pos] != 0) {
    pos = (pos + 1) % T_size;
    ++cnt;
  }
  if (cnt == 10 || list[pos] == 0) {
    return -1;
  }
  return pos;
}