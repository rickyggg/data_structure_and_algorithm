int father[10001], size;
void Initialization() {
  for (int i = 1; i <= size; ++i)
    father[i] = -1;
}
// Path Compression
int Find(int x) {
  return father[x] < 0 ? x : father[x] = Find(father[x]);
// Union by Size
void Union(int i, int j) {
  i = Find(i);
  j = Find(j);
  if (father[j] < father[i]) {
    father[j] += father[i];
    father[i] = j;
  } else {
    father[i] += father[j];
    father[j] = i;
  }
}
