#include <iostream>
#include <vector>
using namespace std;
static const int maxv = 10;
static bool G[maxv][maxv];
static vector<int> visited(maxv, 0);
static int v, e;
void DFS(int start) {
  visited[start] = 1;
  printf("%d ", start);
  for (int i = 0; i < v; ++i) {
    if (!visited[i] && G[start][i])
      DFS(i);
  }
  return;
}