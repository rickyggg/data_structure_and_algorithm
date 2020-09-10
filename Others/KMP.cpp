#include <string>
using namespace std;
static int cnt = 100;
int next1[cnt];
int KMP(string t, string p) {
  int i, j;
  while (i < t.size() && j < p.size()) {
    if (j == -1 || t[i] == p[j]) {
      i++;
      j++;
    } else {
      j = next1[j];
    }
  }
  if (j == p.size())
    return i - j;
  else
    return -1;
};
void GetNext(string p, int *next1) {
  next1[0] = -1;
  int i = 0, j = -1;
  while (i < p.size()) {
    if (j == -1 || p[i] == p[j]) {
      ++i;
      ++j;
      next1[i] = j;
    } else {
      j = next1[j];
    }
  }
}