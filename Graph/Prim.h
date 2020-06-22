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
int prim() {
  for (int i = 1; i <= v; i++) {
    cost[i] = G[1][i];
  }
  cost[1] = 0;
  for (int i = 1; i < v; i++) {
    int k = findMin();
    if (k != 0) {
      ret_cost += cost[k];
      cost[k] = 0;
      for (int j = 2; j <= v; j++) {
        if (cost[j] && G[k][j] < cost[j])
          cost[j] = G[k][j];
      }
    } else {
      return -1;
    }
  }
  return ret_cost;
}