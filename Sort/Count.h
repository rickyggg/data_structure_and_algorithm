// O(n+k)
#include <algorithm>
#include <vector>
using namespace std;
void Count(vector<int> &VecRaw, vector<int> &VecObj) {
  if (VecRaw.empty)
    return;
  int k = *max_element(VecRaw.begin(), VecRaw.end()) + 1;
  vector<int> vecCount(k, 0);
  for (int i = 0; i < VecRaw.size(); i++)
    vecCount[VecRaw[i]]++;
  for (int i = 1; i < k; i++)
    vecCount[i] += vecCount[i - 1];
  for (int i = VecRaw.size(); i > 0; i--)
    VecObj[--vecCount[VecRaw[i - 1]]] = VecRaw[i - 1];
}
vector<int> CountSort(vector<int> &nums) {
  if (nums.empty())
    return {};
  int low = *min_element(nums.begin(), nums.end());
  int high = *max_element(nums.begin(), nums.end());
  int n = high - low + 1;
  vector<int> buckets(n);
  for (auto x : nums)
    ++buckets[x - low];
  vector<int> res;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < buckets[i]; ++j) {
      res.push_back(i + low);
    }
  }
  return res;
}