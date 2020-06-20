#include <iostream>
#include <vector>
using namespace std;
static const int maxv = 10;
static int G[maxv][maxv];
static int v, e;
static int cost[maxv];
static int ret_cost = 0;
int findMin() {
  int min_cost = INT32_MAX;
  int k = 0;
  for (int j = 1; j <= v; j++) {
    if (cost[j] && cost[j] < min_cost) {
      min_cost = cost[j];
      k = j;
    }
  }
  return k;
}