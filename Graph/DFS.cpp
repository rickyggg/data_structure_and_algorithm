#include <iostream>
#include <stack>
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
void DFS_AdjMat(int start) {
  visited[start] = 1;
  cout << start << " ";
  for (int i = 0; i < v; ++i) {
    if (!visited[i] && G_AdjMat[start][i])
      DFS_AdjMat(i);
  }
  return;
}
void DFS_AdjMat_WithoutRecursive(int start) {
  stack<int> temp;
  temp.push(start);
  while (!temp.empty()) {
    start = temp.top();
    temp.pop();
    if (!visited[start]) {
      cout << start << " ";
      visited[start] = 1;
    }
    for (int i = 0; i < v; ++i) {
      if (!visited[i] && G_AdjMat[start][i])
        temp.push(i);
    }
  }
  return;
}
void DFS_AdjTab(int start) {
  visited[start] = 1;
  cout << start << " ";
  int size = G_AdjTab[start].size();
  for (int i = 0; i < size; ++i) {
    if (!visited[G_AdjTab[start][i]] && G_AdjTab[start][i])
      DFS_AdjTab(G_AdjTab[start][i]);
  }
  return;
}