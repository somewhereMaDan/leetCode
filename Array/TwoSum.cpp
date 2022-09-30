#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
  vector<int> ans;
  unordered_map<int,int> m;

  for (int i = 0; i < nums.size(); i++)
  {
    if(m.find(target - nums[i]) != m.end()){
      // we're finding the target - nums[i] in map, if we find it then it'll never go to the end of the map (m.end())
      ans.push_back(m[target - nums[i]]); // pushing the index when we find that element ( target - nums[i])
      ans.push_back(i); // pushing the index of element of which we're currently at
      return ans;
    }else{
      m[nums[i]] = i; // giving the value by index
    }
  }
  return ans;
}
// vector<int> twoSum(vector<int> &nums, int target)
// {
//   vector<int> ret;
//   int size = nums.size();
//   for (int i = 0; i < size - 1; i++)
//   {
//     for (int j = i + 1; j < size; j++)
//     {
//       if (nums[i] + nums[j] == target)
//       {
//         ret.push_back(i);
//         ret.push_back(j);
//         return ret;
//       }
//     }
//   }
//   return ret;
// }