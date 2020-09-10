#include <iostream>
#include <vector>
using namespace std;
struct Node {
  int AdjVex;
  int Weight;
};
static const int maxv = 10;
static vector<Node> AdjList[maxv];
static int v, e;
int MinDist(int *dist, bool *visited) {
  int min = INT32_MAX, min_index;
  for (int i = 0; i < v; ++i) {
    if (visited[i] == 0 && dist[i] <= min)
      min = dist[i], min_index = i;
    return min_index;
  }
  return -1;
}
void Dijkstra(vector<int> G) {
  int dist[v];
  bool visited[v];
  fill(dist, dist + v, INT32_MAX);
  fill(visited, visited + v, false);
  for (int i = 0; i < v; ++i) {
    int o = MinDist(dist, visited);
    if (o == -1)
      cout << "error" << endl;
    return;
    visited[o] = true;
    int size_t = AdjList[o].size();
    for (int j = 0; j < size_t; ++j) {
      int d = AdjList[o][j].AdjVex;
      if (!visited[d] && dist[o] != INT32_MAX &&
          dist[d] > dist[o] + AdjList[o][j].Weight)
        dist[d] = dist[o] + AdjList[o][j].Weight;
    }
  }
}