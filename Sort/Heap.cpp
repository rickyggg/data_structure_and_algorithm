// O(N log N)
void HeapAdjust(int *list, int first, int end) {
  int father = first;
  int son = father * 2 + 1;
  while (son < end) {
    if (son + 1 < end && list[son] < list[son + 1])
      ++son;
    if (list[father] > list[son])
      break; //如果父节点大于子节点则表示调整完毕
    else {
      swap(list[father], list[son]); //不然就交换父节点和子节点的元素
      father = son; //父和子节点变成下一个要比较的位置
      son = 2 * father + 1;
    }
  }
}
void HeapSort(int *list, int len) {
  int i;
  for (i = len / 2; i >= 0; --i) {
    HeapAdjust(list, i, len); //初始化堆，从最后一个父节点开始
  }
  for (i = len - 1; i > 0; --i) {
    swap(list[0], list[i]); //从堆中的取出最大的元素再调整堆
    HeapAdjust(list, 0, i); //调整成堆
  }
}