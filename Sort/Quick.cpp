// O(N log N)
void InsertSort(vector<int> &nums, int left, int right) {
  for (int i = left; i <= right; ++i) {
    int key = nums[i];
    int j = i - 1;
    while ((j >= 0) && (nums[j] > key)) {
      nums[j + 1] = nums[j];
      --j;
    }
    nums[j + 1] = key;
  }
}
int median3(vector<int> &nums, int left, int right) {
  int center = (left + right) >> 1;
  if (nums[left] > nums[center])
    swap(nums[left], nums[center]);
  if (nums[left] > nums[right])
    swap(nums[left], nums[right]);
  if (nums[center] > nums[right])
    swap(nums[center], nums[right]);
  swap(nums[center], nums[left]);
  return nums[left];
}
int partition1(vector<int> &nums, int left, int right) {
  if (left == right)
    return left;
  int pivot = median3(nums, left, right);
  int i = left + 1, j = right;
  while (i <= j) {
    if (nums[i] <= pivot) {
      ++i;
    } else {
      swap(nums[i], nums[j--]);
    }
  }
  swap(nums[left], nums[j]);
  return j;
}
int partition2(vector<int> &nums, int left, int right) {
  if (left == right)
    return left;
  int pivot = median3(nums, left, right);
  // int pivot = nums[left];
  int i = left + 1, j = right;
  while (1) {
    while (i <= j && nums[i] <= pivot)
      ++i;
    while (i <= j && nums[j] >= pivot)
      --j;
    if (i >= j)
      break;
    swap(nums[i], nums[j]);
  }
  swap(nums[j], nums[left]);
  return j;
}
void myQSort(vector<int> &nums, int left, int right) {
  if (left + 12 <= right) {
    int mid = partition2(nums, left, right);
    QSort2(nums, left, mid - 1);
    QSort2(nums, mid + 1, right);
  } else {
    InsertSort(nums, left, right);
  }
}
