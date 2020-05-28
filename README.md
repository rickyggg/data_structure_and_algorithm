# Data Structure and Algorithm in C++
## Algorithm
### Sort
Sorting Algorithm | Average Time Complexity | Worst Time Complexity | Spatial Complexity | Data Object Stability
---|---|---|---|---
[Bubble Sort](./Sort/Bubble.h) | O(n<sup>2</sup>)|O(n<sup>2</sup>)|O(1)|Stable
[Selection Sort](./Sort/Select.h) | O(n<sup>2</sup>)|O(n<sup>2</sup>)|O(1)|The array is unstable and the linked list is stable
[Insert Sort](./Sort/Insert.h) | O(n<sup>2</sup>)|O(n<sup>2</sup>)|O(1)|Stable
[Quick Sort](./Sort/Quick.h) | O(n*log<sub>2</sub>n) |  O(n<sup>2</sup>) | O(log<sub>2</sub>n) | Unstable
[Heap Sort](./Sort/Heap.cpp) | O(n*log<sub>2</sub>n)|O(n*log<sub>2</sub>n)|O(1)|Unstable
[Merge Sort](./Sort/Merge.h) | O(n*log<sub>2</sub>n) | O(n*log<sub>2</sub>n)|O(n)| Stable
[Shell Sort](./Sort/Shell.h) | O(n*log<sup>2</sup>n)|O(n<sup>2</sup>)|O(1)|Unstable
<!--[Count Sort](./Sort/Count.h) | O(n+m)|O(n+m)|O(n+m)|Stable
[Bucket Sort](./Sort/Bucket.h) | O(n+m)|O(n<sup>2</sup>)|O(n*m)|Stable
[Radix Sort](./Sort/Radix.h) | O(k*n)|O(n<sup>2</sup>)| |Stable
-->
> * Are arranged in ascending order
> * k: represents the number of "digits" in the value
> * n: represents the size of the data
> * m: represents the maximum value minus the minimum value of the data
