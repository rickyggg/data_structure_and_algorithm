// O(N log N)
void InsertSort(int *list, int left, int right) {
  int j;
  int temp;
  for (int i = left; i <= right; i++) {
    temp = list[i];
    for (j = i - 1; j >= 0 && list[j] > temp; j--)
      list[j + 1] = list[j];
    list[j + 1] = temp;
  }
}
int Median3(int *v, int left, int right) {
  int center = (left + right) / 2;
  if (v[left] > v[center])
    swap(v[left], v[center]);
  if (v[left] > v[right])
    swap(v[left], v[right]);
  if (v[center] > v[right])
    swap(v[center], v[right]);
  swap(v[center], v[right - 1]);
  return v[right - 1];
}
void QSort1(int *v, int left, int right) {
  int i, j, pivot;
  if (left + 10 <= right) {
    pivot = Median3(v, left, right);
    i = left;
    j = right - 1;
    while (1) {
      while (v[++i] < pivot) {
      }
      while (v[--j] > pivot) {
      }
      if (i < j)
        swap(v[i], v[j]);
      else
        break;
    }
    swap(v[i], v[right - 1]);
    QSort1(v, left, i - 1);
    QSort1(v, i + 1, right);
  } else {
    InsertSort(v, left, right);
  }
}

int partition1(vector<int> &nums, int left, int right) {
  int pivot = nums[left];
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
  int pivot = nums[left];
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
void QSort2(vector<int> &nums, int left, int right) {
  if (left < right) {
    int mid = partition(nums, left, right);
    QSort2(nums, left, mid - 1);
    QSort2(nums, mid + 1, right);
  }
}