<div align="center">
简体中文
&emsp;&emsp; | &emsp;&emsp;
<a href="https://github.com/guojiarui1102/data_structure_and_algorithm/blob/master/README_en.md">English</a>
</div>
<br>

# 数据结构与算法（C++实现）

## 数据结构

### 链表

数据结构 | 操作 | 平均时间复杂度
--- | --- | ---
数组 | 插入/删除 | O(n)
[链表](./DataStructure/LinkedList.cpp) | \- | O(1)

### [栈](./DataStructure/Stack.cpp)

### [队列](./DataStructure/Quene.cpp)

### [堆](./DataStructure/Heap.cpp)

操作 | 平均时间复杂度
--- | ---
建堆 | O(n)
插入 | O(logn)
删除最值 | O(logn)

## 算法

### 排序

#### 内排序

排序算法 | 平均时间复杂度 | 最差时间复杂度 | 空间复杂度 | 稳定性
--- | --- | --- | --- | ---
[冒泡排序](./Sort/Bubble.cpp) | O(n^2)|O(n^2)|O(1)|稳定
[选择排序](./Sort/Select.cpp) | O(n^2)|O(n^2)|O(1)|数组 -- 不稳定<br>链表 -- 稳定
[插入排序](./Sort/Insert.cpp) | O(n^2)|O(n^2)|O(1)|稳定
[快速排序](./Sort/Quick.cpp) | O(n*logn) | O(n^2) | O(logn) | 不稳定
[堆排序](./Sort/Heap.cpp) | O(n*logn)| O(n*logn)|O(1)|不稳定
[归并排序](./Sort/Merge.cpp) | O(n*logn) | O(n*logn)|O(n)| 稳定
[希尔排序](./Sort/Shell.cpp) | O(n*logn)|O(n^2)|O(1)|不稳定
[计数排序](./Sort/Count.cpp) | O(n+k)|O(n+k)|O(n+k)|稳定
[桶排序](./Sort/Bucket.cpp) | O(n+m)|O(n^2)|O(n+m)|稳定
[基数排序](./Sort/Radix.cpp) | O(d*(n+m)) | O(d*(n+m))| O(n+m) |稳定

> * 默认为从小到大排序
> * n: 数据规模
> * k: 最大值
> * m: 桶的数量
> * d: 数的位数

<!--
* m: represents the maximum value minus the minimum value of the data
-->

#### 外部排序

### 查找

查找算法 | 平均时间复杂度 | 空间复杂度
--- | --- | ---
[遍历查找](./Find/Sequential.cpp) | O(n) | O(1)
[二分查找](./Find/Binary.cpp) | O(logn) | O(1)
[二分查找树](./Find/BST.cpp) | O(logn) | O(1)
[Hash查找](./Find/Hash.cpp) | O(1) | O(n)

### 树

#### 树的遍历

* [递归遍历](./Tree/RecursivelyTraverse.cpp)
* [非递归遍历](./Tree/traverse_without_recursive.cpp)

#### 平衡树

* [AVL](./Tree/AVL.cpp)
* [RbTree](./Tree/RbTree.cpp)

### 图

#### 图的遍历

算法 | 数据结构 | 平均时间复杂度 | 空间复杂度
--- | --- | --- | ---
[BFS](./Graph/BFS.cpp) | 邻接矩阵 | O(v^2) | O(v^2)
\- | 邻接表 | O(v+e) | O(v+e)
[DFS](./Graph/DFS.cpp) | 邻接矩阵 | O(v^2) | O(v^2)
\- | 邻接表 | O(v+e) | O(v+e)

> * v: 顶点数量
> * e: 边的数量

#### 拓扑排序

算法 | 数据结构 | 平均时间复杂度 | 空间复杂度
--- | --- | --- | ---
[Top排序](./Graph/Top排序.cpp) | 邻接矩阵 | O(v^2) | O(v^2)
\- | 邻接表 | O(v+e) | O(v+e)

#### 最短路

类型 | 算法 | 数据结构 | 平均时间复杂度 | 空间复杂度
--- | --- | --- | --- | ---
[无权](./Graph/Unweighted.cpp) | BFS | 邻接表 | O(v+e) | O(v+e)
有权 | [Dijkstra](./Graph/Dijkstra.cpp) | Fibonacci堆 | O(e+vlogv) | \-
\ | [Floyd](./Graph/Floyd.cpp) | 邻接矩阵 | O(v^3) | O(v^2)

#### 最小生成树

算法 | 数据结构 | 平均时间复杂度 | 空间复杂度
--- | --- | --- | ---
[Prim](./Graph/Prim.cpp) | 邻接矩阵 | O(v^2) | O(v^2)
\- | 二叉堆 | O(elogv) | \-
[Kruskal](./Graph/Kruskal.cpp) | 堆 | O(elogv) | \-

### 其他

#### [并查集](./Others/DisjointSets.cpp)

算法 | 平均时间复杂度 | 空间复杂度
--- | --- | ---
无优化 | O(m*n) | O(n)
路经压缩 | O(m*logn) | O(n)
按秩归并 | O(m*logn) | O(n)
两种优化 | O(a(n)) | O(n)

> * a: Ackeramann函数的逆
> * m: 操作数量
> * n: 数据规模

#### Top K问题

算法 | 平均时间复杂度 | 最差时间复杂度
--- | --- | ---
排序 | O(n*logn) | O(n^2)
堆 | O(n*logk) | O(n*logn)
[快排思想](./Others/top_k_qselect.cpp) | O(n) | O(n^2)

* 比较：快速选择的方法需要保存所有数据，海量数据情况下超过内存限制，适合用堆的方法

#### 动态规划

写出状态转移方程；

-->定义初始值；

例子：[斐波那契数](./Others/Fibonacci_dp.cpp)

#### 回溯

1. 全局/类内变量保存结果

2. 终止条件

3. DFS递归

Example:[LeetCode_131](./Others/Backtrack.cpp)

#### 递归

* [翻转链表](./Others/reverse_list.cpp)

#### [单例模式](./Others/singleton.cpp)

#### LRU

* [不使用STL](./Others/lru.cpp)
* [使用STL](./Others/lru_stl.cpp)

#### 背包问题

* [0-1背包](./Others/0-1knapsack.cpp)

#### 概率问题

* [不均匀硬币实现等概率](./Others/randcoin.cpp)
* [rand5()实现rand7()](./Others/rand5to7.cpp)

#### Huffman编码

#### KMP
