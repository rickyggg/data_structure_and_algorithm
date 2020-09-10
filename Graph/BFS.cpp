#include <iostream>
#include <queue>
#include <vector>
using namespace std;
static const int maxv = 10;
static bool G_AdjMat[maxv][maxv];  // Adjacency Matrix
static vector<int> G_AdjTab[maxv]; // Adjacency List
static vector<int> visited(maxv, 0);
static int v, e;
void AddEdge(vector<int> adjacency[], int u, int v) {
  adjacency[u].push_back(v);
  adjacency[v].push_back(u);
}
void BFS_AdjMat(int start) {
  queue<int> bfs_queue;
  bfs_queue.push(start);
  visited[start] = 1;
  while (!bfs_queue.empty()) {
    int num = bfs_queue.front();
    printf("%d ", num);
    bfs_queue.pop();
    for (int i = 0; i < v; ++i) {
      if (!visited[i] && G_AdjMat[num][i]) {
        bfs_queue.push(i);
        visited[i] = 1;
      }
    }
  }
}
void BFS_AdjTab(int start) {
  queue<int> bfs_queue;
  bfs_queue.push(start);
  visited[start] = 1;
  while (!bfs_queue.empty()) {
    int s = bfs_queue.front();
    printf("%d ", s);
    bfs_queue.pop();
    int size = G_AdjTab[s].size();
    for (int i = 0; i < size; ++i) {
      if (!visited[G_AdjTab[s][i]]) {
        bfs_queue.push(G_AdjTab[s][i]);
        visited[G_AdjTab[s][i]] = 1;
      }
    }
  }
}