class Solution {
public:
  int Partition(vector<int> &nums, int left, int right) {
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
    swap(nums[left], nums[j]);
    return j;
  }

  vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
    if (!input.size() || !k || k > input.size())
      return {};
    int left = 0, right = input.size() - 1;
    int index = Partition(input, left, right);
    while (index != k - 1) {
      if (index > k - 1) {
        right = index - 1;
        index = Partition(input, left, right);
      } else {
        left = index + 1;
        index = Partition(input, left, right);
      }
    }
    vector<int> res(input.begin(), input.begin() + k);
    return res;
  }
};