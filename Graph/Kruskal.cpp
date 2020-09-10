#include <iostream>
using namespace std;
static const int INF = 0;
struct Node {
  int s, e;
  int cost;
} edge[3001];
static int father[1001];
static int Size = 0;
static int v, e;
void makeHeap() { /* 将数组调整成小顶堆 O(e)的时间复杂度 */
  int child, parent;
  Size = e;
  edge[0].cost = INF; /* 哨兵 */
  for (int i = Size / 2; i >= 1; i--) {
    Node temp = edge[i];
    for (parent = i; parent * 2 <= Size; parent = child) {
      child = parent * 2; /* 先指向左孩子 */
      if ((child != Size) &&
          edge[child].cost > edge[child + 1].cost) { /* 右孩子*/
        child++;
      }
      if (temp.cost <= edge[child].cost) {
        break;
      } else {
        edge[parent] = edge[child];
      }
    }
    edge[parent] = temp;
  }
}
Node deleteMinFromHeap() { /* 从小顶堆中删除元素  在调整成小顶堆
                              时间复杂度O(log e)*/
  Node temp = edge[Size--];
  Node minItem = edge[1];
  // cout << Size << endl;
  int parent, child;
  for (parent = 1; parent * 2 <= Size; parent = child) {
    child = parent * 2;
    if ((child != Size) && (edge[child].cost > edge[child + 1].cost)) {
      child += 1; /* 找左右孩子中较小者 */
    }
    if (temp.cost <= edge[child].cost)
      break;
    else
      edge[parent] = edge[child];
  }
  edge[parent] = temp;
  return minItem;
}
void init() {
  for (int i = 1; i <= v; i++)
    father[i] = -1;
}
int find(int x) {
  if (father[x] <= -1)
    return x;
  else
    return father[x] = find(father[x]);
}

void Union(int x, int y) {
  x = find(x);
  y = find(y);
  if (father[x] < father[y]) {
    father[x] += father[y];
    father[y] = x;
  } else {
    father[y] += father[x];
    father[x] = y;
  }
}
int Kruskal() {
  int ans = 0;
  for (int i = 1; i <= e; i++) {
    cin >> edge[i].s >> edge[i].e >> edge[i].cost;
  }
  makeHeap();
  init();
  int k = 1;
  for (int i = 1; i <= e; i++) {
    Node node = deleteMinFromHeap(); /* 总的复杂度 O(e * log v) */
    int x = find(node.s);            /*O(1)*/
    int y = find(node.e);
    if (x != y) {
      ans += node.cost;
      Union(node.s, node.e); /*O(1)*/
      k++;
      if (k == v) {
        break;
      }
    }
  }
  if (k != v)
    cout << -1 << endl;
  else
    cout << ans << endl;
  return 0;
}