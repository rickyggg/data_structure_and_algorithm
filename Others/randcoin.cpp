#include <iostream>
#include <map>
using namespace std;

int coin() { return (rand() % 10) > 4; }

int coin_new() {
  while (1) {
    int res = coin();
    if (coin() != res)
      return res;
  }
}

int main() {
  int n = 1000000;
  float count[2] = {0, 0};
  for (int i = 0; i < n; i++)
    count[coin_new()]++;

  cout << "0: " << count[0] / n << endl;
  cout << "1: " << count[1] / n << endl;
}