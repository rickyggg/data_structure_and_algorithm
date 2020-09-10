// O(v^3)
static const int maxv = 101;
static int v, e, Dist[maxv][maxv];
void Floyd() {
  for (int k = 1; k <= v; k++)
    for (int i = 1; i <= v; i++)
      for (int j = 1; j <= v; j++) {
        if (Dist[i][k] + Dist[k][j] < Dist[i][j])
          Dist[i][j] = Dist[i][k] + Dist[k][j];
      }
}