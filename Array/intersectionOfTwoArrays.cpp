#include <bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
  vector<int> ans;
  unordered_map<int, int> um;

  for (auto num : nums1)
  {
    um[num]++;
  }
  // this checks if the map have the element if it doesn't then it'll add it also if it's get repeated
  // then the value will get increase by 1 everytime

  for (auto num : nums2)
  {
    if (um[num] > 0)
    {
      ans.push_back(num);
      um[num]--;
    }
  }

  // um[num] > 0, this checks if the values of nums2 array is present in the map(um) also if it is there
  // then it checks if it's value is greater than 0.

  // and when everytime we push a value to ans(array) value of that element in the map get reduced by 1
  return ans;
}