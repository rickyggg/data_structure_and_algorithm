// O(logN)
int BinarySearch(vector<int> &nums, int target) {
  int left = 0, right = nums.size() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (nums[mid] < target) {
      left = mid + 1;
    } else if (nums[mid] > target) {
      right = mid - 1;
    } else if (nums[mid] == target) {
      return mid;
    }
  }
  return -1;
}

int LeftBound(vector<int> &nums, int target) {
  int left = 0, right = nums.size() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (nums[mid] < target) {
      left = mid + 1;
    } else if (nums[mid] > target) {
      right = mid - 1;
    } else if (nums[mid] == target) {
      right = mid - 1;
    }
  }
  if (left >= nums.size() || nums[left] != target) {
    return -1;
  }
  return left;
}

int RightBound(vector<int> &nums, int target) {
  int left = 0, right = nums.size() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (nums[mid] < target) {
      left = mid + 1;
    } else if (nums[mid] > target) {
      right = mid - 1;
    } else if (nums[mid] == target) {
      left = mid + 1;
    }
  }
  if (right >= nums.size() || nums[right] != target) {
    return -1;
  }
  return right;
}