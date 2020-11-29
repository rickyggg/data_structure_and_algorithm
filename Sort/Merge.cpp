// O(N log N)
void Merge(vector<int> &nums, vector<int> &temp, int left, int mid, int right) {
  int i = left;
  int j = mid + 1;
  int k = left;
  while (i <= mid && j <= right) {
    if (nums[i] < nums[j])
      temp[k++] = nums[i++];
    else
      temp[k++] = nums[j++];
  }
  while (i <= mid)
    temp[k++] = nums[i++];
  while (j <= right)
    temp[k++] = nums[j++];

  for (i = left; i <= right; i++)
    nums[i] = temp[i];
}
void MergeSortPart(vector<int> &nums, vector<int> &temp, int left, int right) {
  if (left >= right)
    return;
  int mid = left + (right - left) / 2;
  MergeSortPart(nums, temp, left, mid);
  MergeSortPart(nums, temp, mid + 1, right);
  Merge(nums, temp, left, mid, right);
}
void MergeSort(vector<int> &nums) {
  vector<int> temp(nums.size(), 0);
  MergeSortPart(nums, temp, 0, nums.size() - 1);
}