#include <iostream>
#include <vector>
using namespace std;

int solve(int v, vector<int> &c, vector<int> &w) {
  int n = c.size();
  int dp[n + 1][v + 1];
  for (int i = 0; i <= v; ++i)
    dp[0][i] = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = c[i]; j <= v; ++j)
      dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - c[i]] + w[i]);
  }
  return dp[n][v];
}

int solve2(int v, vector<int> &c, vector<int> &w) {
  int n = c.size();
  int dp[v + 1];
  for (int i = 0; i <= v; ++i)
    dp[i] = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = v; j >= c[i]; --j)
      dp[j] = max(dp[j], dp[j - c[i]] + w[i]);
  }
  return dp[v];
}

int main() {
  int v = 5;
  vector<int> c = {1, 2, 3, 4};
  vector<int> w = {2, 4, 4, 5};
  cout << solve2(v, c, w) << endl;
}