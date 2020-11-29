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

#### Internal 排序

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

> * Are arranged in ascending order
> * n: represents the size of the data
> * k: represents the max number of the data (Count 排序)
> * m: represents the number of the buckets
> * d: represents the number of "digits" in the value (Radix 排序)

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

[递归遍历](./Tree/RecursivelyTraverse.cpp)<br>
非递归遍历

#### 平衡树

[AVL](./Tree/AVL.cpp)

[RbTree](./Tree/RbTree.cpp)

### 图

#### 图的遍历

算法 | 数据结构 | 平均时间复杂度 | 空间复杂度
--- | --- | --- | ---
[BFS](./Graph/BFS.cpp) | 邻接矩阵 | O(v^2) | O(v^2)
\- | 邻接表 | O(v+e) | O(v+e)
[DFS](./Graph/DFS.cpp) | 邻接矩阵 | O(v^2) | O(v^2)
\- | 邻接表 | O(v+e) | O(v+e)

> * v: represents the number of the vertexs
> * e: represents the number of the edges

#### 拓扑排序

算法 | 数据结构 | 平均时间复杂度 | 空间复杂度
--- | --- | --- | ---
[Top排序](./Graph/Top排序.cpp) | 邻接矩阵 | O(v^2) | O(v^2)
\- | 邻接表 | O(v+e) | O(v+e)

#### 最短路

类型 | 算法 | 数据结构 | 平均时间复杂度 | 空间复杂度
--- | --- | --- | --- | ---
[无权](./Graph/Unweighted.cpp) | BFS | 邻接表 | O(v+e) | O(v+e)
有权 | [Dijkstra](./Graph/Dijkstra.cpp) | Fibonacci Heap | O(e+vlogv) | \-
\ | [Floyd](./Graph/Floyd.cpp) | 邻接矩阵 | O(v^3) | O(v^2)

#### Minimum Spanning Tree

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

> * a: represents the inverse Ackeramann function
> * m: represents the number of 操作s
> * n: represents the size of the data

#### 第K大

算法 | 平均时间复杂度 | 最差时间复杂度
--- | --- | ---
普通 | O(n^2) | O(n^2)
堆 | O(n*logn) | O(n*logn)
快排思想 | O(n) | O(n^2)

#### 动态规划

Define the 数组(save the history data) --> Find the Relation

-->Confirm the Initial Value

Example：[Fibonacci_dp](./Others/Fibonacci_dp.cpp)

#### 回溯

1. Global Variable and Temp(save the result)

2. End Condition

3. Recursive

Example:[LeetCode_131](./Others/Backtrack.cpp)

#### 递归

* [reverse_list](./Others/reverse_list.cpp)

#### Huffman编码

#### KMP
