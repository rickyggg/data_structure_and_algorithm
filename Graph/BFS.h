#include <iostream>
#include <queue>
using namespace std;
static const int maxv = 10;
static bool G[maxv][maxv];
static vector<int> visited(maxv, 0);
static int v, e;
void BFS(int start) {
  queue<int> bfs_queue;
  bfs_queue.push(start);
  visited[start] = 1;
  while (!bfs_queue.empty()) {
    int num = bfs_queue.front();
    printf("%d ", num);
    bfs_queue.pop();
    for (int i = 0; i < v; ++i) {
      if (!visited[i] && G[num][i]) {
        bfs_queue.push(i);
        visited[i] = 1;
      }
    }
  }
}