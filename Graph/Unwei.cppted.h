// O(e+v)
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
static const int maxv = 10;
static vector<int> G_AdjList[maxv]; // Adjacency List
static vector<int> Dist(maxv + 1, INT32_MAX);
static vector<int> Path(maxv + 1, 0);
static int v, e;
void AddEdge(vector<int> adjacency[], int u, int v) {
  adjacency[u].push_back(v);
}
void BFS_AdjTab(int start) {
  queue<int> bfs_queue;
  Dist[start] = 0;
  bfs_queue.push(start);
  while (!bfs_queue.empty()) {
    int s = bfs_queue.front();
    bfs_queue.pop();
    int size = G_AdjList[s].size();
    for (int i = 0; i < size; ++i) {
      if (Dist[G_AdjList[s][i]] == INT32_MAX) {
        bfs_queue.push(G_AdjList[s][i]);
        Dist[G_AdjList[s][i]] = Dist[s] + 1;
        Path[G_AdjList[s][i]] = s;
      }
    }
  }
}