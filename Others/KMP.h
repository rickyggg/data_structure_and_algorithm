#include <string>
using namespace std;
int Next[10];
int KMP(string t, string p) {
  int i, j;
  while (i < t.size() && j < p.size()) {
    if (j == -1 || t[i] == p[j]) {
      i++;
      j++;
    } else {
      j = Next[j];
    }
  }
  if (j == p.size())
    return i - j;
  else
    return -1;
};