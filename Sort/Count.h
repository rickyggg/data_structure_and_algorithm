// O(n+k)
#include <algorithm>
#include <vector>
void Count(std::vector<int> &VecRaw, std::vector<int> &VecObj) {
  if (VecRaw.size() == 0)
    return;
  int k = *max_element(VecRaw.begin(), VecRaw.end()) + 1;
  std::vector<int> vecCount(k, 0);
  for (int i = 0; i < VecRaw.size(); i++)
    vecCount[VecRaw[i]]++;
  for (int i = 1; i < k; i++)
    vecCount[i] += vecCount[i - 1];
  for (int i = VecRaw.size(); i > 0; i--)
    VecObj[--vecCount[VecRaw[i - 1]]] = VecRaw[i - 1];
}