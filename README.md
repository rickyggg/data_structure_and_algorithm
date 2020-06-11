# Data Structure and Algorithm in C++
## Algorithm
### Sort
Sorting Algorithm | Average Time Complexity | Worst Time Complexity | Spatial Complexity | Data Object Stability
---|---|---|---|---
[Bubble Sort](./Sort/Bubble.h) | O(n<sup>2</sup>)|O(n<sup>2</sup>)|O(1)|Stable
[Selection Sort](./Sort/Select.h) | O(n<sup>2</sup>)|O(n<sup>2</sup>)|O(1)|The array is unstable and the linked list is stable
[Insert Sort](./Sort/Insert.h) | O(n<sup>2</sup>)|O(n<sup>2</sup>)|O(1)|Stable
[Quick Sort](./Sort/Quick.h) | O(n*log<sub>2</sub>n) | O(n<sup>2</sup>) | O(log<sub>2</sub>n) | Unstable
[Heap Sort](./Sort/Heap.h) | O(n*log<sub>2</sub>n)| O(n*log<sub>2</sub>n)|O(1)|Unstable
[Merge Sort](./Sort/Merge.h) | O(n*log<sub>2</sub>n) | O(n*log<sub>2</sub>n)|O(n)| Stable
[Shell Sort](./Sort/Shell.h) | O(n*log<sub>2</sub>n)|O(n<sup>2</sup>)|O(1)|Unstable
[Count Sort](./Sort/Count.h) | O(n+k)|O(n+k)|O(n+k)|Stable
[Bucket Sort](./Sort/Bucket.h) | O(n+m)|O(n<sup>2</sup>)|O(n+m)|Stable
[Radix Sort](./Sort/Radix.h) | O(k*n) | O(k*n)| O(k+n) |Stable
> * Are arranged in ascending order
> * n: represents the size of the data
> * k: represents the max number of the data (Count Sort)
> * m: represents the number of the buckets
> * k: represents the number of "digits" in the value (Radix Sort)
<!--
* m: represents the maximum value minus the minimum value of the data
-->

### Find
Find Algorithm | Average Time Complexity | Spatial Complexity
--- | --- | ---
[Sequential Search](./Find/Sequential.h) | O(n) | O(1)
[Binary Search](./Find/Binary.h) | O(log<sub>2</sub>n) | O(1)
[Hash Search](./Find/Hash.h) | O(1) | O(n)

### Graph
#### Graph Traversal
Alogorithm | Data Structure | Average Time Complexity | Spatial Complexity
--- | --- | --- | ---
[BFS](./Graph/BFS.h) | Adjacency matrix | O(v<sup>2</sup>) | O(v<sup>2</sup>)
[BFS](./Graph/BFS.h) | Adjacency list | O(v+e) | O(v+e)
[DFS](./Graph/DFS.h) | Adjacency matrix | O(v<sup>2</sup>) | O(v<sup>2</sup>)
[DFS](./Graph/DFS.h) | Adjacency list | O(v+e) | O(v+e)
> * v: represents the number of the vertexs
> * e: represents the number of the edges

### Others
#### Disjoint Sets
Alogorithm | Average Time Complexity | Spatial Complexity
--- | --- | ---
Without Optimization | O(m*n) | O(n)
Union by Size | O(m*log<sub>2</sub>n) | O(n)
Path Compression | O(m*log<sub>2</sub>n) | O(n)
Both Opimization | O(a(n)) | O(n)
> * a: represents the Ackeramann inverse function
> * m: represents the number of operations
> * n: represents the size of the data