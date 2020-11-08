# Data Structure and Algorithm in C++

## Data Structure

### Linked List

Data Structure | Operation | Average Time Complexity
--- | --- | ---
Array | Insert/Delete | O(n)
[Linked List](./DataStructure/LinkedList.cpp) | \- | O(1)

### [Stack](./DataStructure/Stack.cpp)

### [Queue](./DataStructure/Quene.cpp)

### [Heap](./DataStructure/Heap.cpp)

Operation | Average Time Complexity
--- | ---
BuildHeap | O(n)
Insert | O(logn)
DeleteMin | O(logn)

## Algorithm

### Sort

#### Internal Sort

Sorting Algorithm | Average Time Complexity | Worst Time Complexity | Spatial Complexity | Data Object Stability
--- | --- | --- | --- | ---
[Bubble Sort](./Sort/Bubble.cpp) | O(n^2)|O(n^2)|O(1)|Stable
[Selection Sort](./Sort/Select.cpp) | O(n^2)|O(n^2)|O(1)|array -- unstable<br>linked list -- stable
[Insert Sort](./Sort/Insert.cpp) | O(n^2)|O(n^2)|O(1)|Stable
[Quick Sort](./Sort/Quick.cpp) | O(n*logn) | O(n^2) | O(logn) | Unstable
[Heap Sort](./Sort/Heap.cpp) | O(n*logn)| O(n*logn)|O(1)|Unstable
[Merge Sort](./Sort/Merge.cpp) | O(n*logn) | O(n*logn)|O(n)| Stable
[Shell Sort](./Sort/Shell.cpp) | O(n*logn)|O(n^2)|O(1)|Unstable
[Count Sort](./Sort/Count.cpp) | O(n+k)|O(n+k)|O(n+k)|Stable
[Bucket Sort](./Sort/Bucket.cpp) | O(n+m)|O(n^2)|O(n+m)|Stable
[Radix Sort](./Sort/Radix.cpp) | O(d*(n+m)) | O(d*(n+m))| O(n+m) |Stable

> * Are arranged in ascending order
> * n: represents the size of the data
> * k: represents the max number of the data (Count Sort)
> * m: represents the number of the buckets
> * d: represents the number of "digits" in the value (Radix Sort)

<!--
* m: represents the maximum value minus the minimum value of the data
-->

#### External Sort

### Find

Find Algorithm | Average Time Complexity | Spatial Complexity
--- | --- | ---
[Sequential Search](./Find/Sequential.cpp) | O(n) | O(1)
[Binary Search](./Find/Binary.cpp) | O(logn) | O(1)
[Binary Search Tree](./Find/BST.cpp) | O(logn) | O(1)
[Hash Search](./Find/Hash.cpp) | O(1) | O(n)

### Tree

#### Tree Traversal

[Tree Travelsal Recursion](./Tree/RecursivelyTraverse.cpp)

Without Recursive

#### Self-Balanced tree

[AVL](./Tree/AVL.cpp)

[RbTree](./Tree/RbTree.cpp)

### Graph

#### Graph Traversal

Alogorithm | Data Structure | Average Time Complexity | Spatial Complexity
--- | --- | --- | ---
[BFS](./Graph/BFS.cpp) | Adjacency Matrix | O(v^2) | O(v^2)
\- | Adjacency List | O(v+e) | O(v+e)
[DFS](./Graph/DFS.cpp) | Adjacency Matrix | O(v^2) | O(v^2)
\- | Adjacency List | O(v+e) | O(v+e)

> * v: represents the number of the vertexs
> * e: represents the number of the edges

#### Top Sort

Alogorithm | Data Structure | Average Time Complexity | Spatial Complexity
--- | --- | --- | ---
[TopSort](./Graph/TopSort.cpp) | Adjacency Matrix | O(v^2) | O(v^2)
\- | Adjacency List | O(v+e) | O(v+e)

#### Shortest Path

Category | Algorithm | Data Structure | Average Time Complexity | Spatial Complexity
--- | --- | --- | --- | ---
[Unweighted](./Graph/Unweighted.cpp) | BFS | Adjacency List | O(v+e) | O(v+e)
weighted | [Dijkstra](./Graph/Dijkstra.cpp) | Fibonacci Heap | O(e+vlogv) | \-
Both | [Floyd](./Graph/Floyd.cpp) | Adjacency Matrix | O(v^3) | O(v^2)

#### Minimum Spanning Tree

Algorithm | Data Structure | Average Time Complexity | Spatial Complexity
--- | --- | --- | ---
[Prim](./Graph/Prim.cpp) | Adjacency Matrix | O(v^2) | O(v^2)
\- | Binary Heap | O(elogv) | \-
[Kruskal](./Graph/Kruskal.cpp) | Heap | O(elogv) | \-

### Others

#### [Disjoint Sets](./Others/DisjointSets.cpp)

Alogorithm | Average Time Complexity | Spatial Complexity
--- | --- | ---
Without Optimization | O(m*n) | O(n)
Union by Size | O(m*logn) | O(n)
Path Compression | O(m*logn) | O(n)
Both Opimization | O(a(n)) | O(n)

> * a: represents the inverse Ackeramann function
> * m: represents the number of operations
> * n: represents the size of the data

#### Kth Largest

Alogorithm | Average Time Complexity | Worst Time Complexity
--- | --- | ---
Normal | O(n^2) | O(n^2)
Heap | O(n*logn) | O(n*logn)
QSelect | O(n) | O(n^2)

#### Dynamic Programming

Define the Array(save the history data) --> Find the Relation

-->Confirm the Initial Value

Example：[Fibonacci_dp](./Others/Fibonacci_dp.cpp)

#### Backtrack

1. Global Variable and Temp(save the result)

2. End Condition

3. Recursive

Example:[LeetCode_131](./Others/Backtrack.cpp)

#### Recursive

* [reverse_list](./Others/reverse_list.cpp)

#### Huffman

#### KMP
