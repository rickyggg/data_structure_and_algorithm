# Data Structure and Algorithm in C++

## Data Structure

### Linked List

Data Structure | Operation | Average Time Complexity
--- | --- | ---
Array | Insert/Delete | O(n)
[Linked List](./DataStructure/LinkedList.h) | \- | O(1)

### [Stack](./DataStructure/Stack.h)

### [Queue](./DataStructure/Queue.h)

### [Heap](./DataStructure/Heap.h)

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
[Bubble Sort](./Sort/Bubble.h) | O(n^2)|O(n^2)|O(1)|Stable
[Selection Sort](./Sort/Select.h) | O(n^2)|O(n^2)|O(1)|array -- unstable<br>linked list -- stable
[Insert Sort](./Sort/Insert.h) | O(n^2)|O(n^2)|O(1)|Stable
[Quick Sort](./Sort/Quick.h) | O(n*logn) | O(n^2) | O(logn) | Unstable
[Heap Sort](./Sort/Heap.h) | O(n*logn)| O(n*logn)|O(1)|Unstable
[Merge Sort](./Sort/Merge.h) | O(n*logn) | O(n*logn)|O(n)| Stable
[Shell Sort](./Sort/Shell.h) | O(n*logn)|O(n^2)|O(1)|Unstable
[Count Sort](./Sort/Count.h) | O(n+k)|O(n+k)|O(n+k)|Stable
[Bucket Sort](./Sort/Bucket.h) | O(n+m)|O(n^2)|O(n+m)|Stable
[Radix Sort](./Sort/Radix.h) | O(d*(n+m)) | O(d*(n+m))| O(n+m) |Stable

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
[Sequential Search](./Find/Sequential.h) | O(n) | O(1)
[Binary Search](./Find/Binary.h) | O(logn) | O(1)
[Binary Search Tree](./Find/BST.h) | O(logn) | O(1)
[Hash Search](./Find/Hash.h) | O(1) | O(n)

### Tree

#### Tree Traversal

[Recursion](./Tree/RecursivelyTraverse.h)

Without Recursive

#### [AVL](./Tree/AVL.h)

### Graph

#### Graph Traversal

Alogorithm | Data Structure | Average Time Complexity | Spatial Complexity
--- | --- | --- | ---
[BFS](./Graph/BFS.h) | Adjacency Matrix | O(v^2) | O(v^2)
\- | Adjacency List | O(v+e) | O(v+e)
[DFS](./Graph/DFS.h) | Adjacency Matrix | O(v^2) | O(v^2)
\- | Adjacency List | O(v+e) | O(v+e)

> * v: represents the number of the vertexs
> * e: represents the number of the edges

#### Top Sort

Alogorithm | Data Structure | Average Time Complexity | Spatial Complexity
--- | --- | --- | ---
[TopSort](./Graph/TopSort.h) | Adjacency Matrix | O(v^2) | O(v^2)
\- | Adjacency List | O(v+e) | O(v+e)

#### Shortest Path

Category | Algorithm | Data Structure | Average Time Complexity | Spatial Complexity
--- | --- | --- | --- | ---
[Unweighted](./Graph/Unweighted.h) | BFS | Adjacency List | O(v+e) | O(v+e)
weighted | [Dijkstra](./Graph/Dijkstra.h) | Fibonacci Heap | O(e+vlogv) | \-
Both | [Floyd](./Graph/Floyd.h) | Adjacency Matrix | O(v^3) | O(v^2)

#### Minimum Spanning Tree

Algorithm | Data Structure | Average Time Complexity | Spatial Complexity
--- | --- | --- | ---
[Prim](./Graph/Prim.h) | Adjacency Matrix | O(v^2) | O(v^2)
\- | Binary Heap | O(elogv) | \-
[Kruskal](./Graph/Kruskal.h) | Heap | O(elogv) | \-

### Others

#### [Disjoint Sets](./Others/DisjointSets.h)

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

**First**:<br>Define the Array
**Second**:<br>Find the Relation
**Third**:<br>Confirm the Initial Value

Example：[Fibonacci_dp](./Others/Fibonacci_dp.h)

#### Backtracking

#### Huffman

#### KMP
