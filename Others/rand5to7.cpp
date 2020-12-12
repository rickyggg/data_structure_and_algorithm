#include <iostream>
#include <vector>
using namespace std;

int rand5() { return rand() % 5 + 1; }

int rand7() {
  while (1) {
    int res = (rand5() - 1) * 5 + rand5() - 1;
    if (1 <= res && res <= 21)
      return res % 7 + 1;
  }
}

int main() {
  int n = 100000000;
  vector<int> v(8, 0);
  for (int i = 0; i < n; ++i) {
    ++v[rand7()];
  }
  for (int i = 1; i < 8; ++i)
    cout << v[i] * 1.0 / n << " ";
}