#include <iostream>
#include <queue>
using namespace std;
static const int maxv = 10;
static vector<int> G[maxv]; // Adjacency List
void Sta_Indegree(vector<vector<int>> G, vector<int> &Indegree) {
  for (auto x : G) {
    for (auto y : x)
      Indegree[y]++;
  }
}
void TopSort(vector<vector<int>> G, int maxv, vector<int> &Indegree) {
  int cnt = 0;
  queue<int> q;
  for (int i = 0; i < maxv; i++) {
    if (Indegree[i] == 0)
      q.push(i);
  }
  int temp;
  while (!q.empty()) {
    temp = q.front();
    cout << temp << " ";
    q.pop();
    ++cnt;
    for (int i = 0; i < G[temp].size(); i++) {
      int v = G[temp][i];
      if (--Indegree[v] == 0)
        q.push(v);
    }
  }
  if (cnt != maxv)
    cout << "Graph has a cycle" << endl;
}