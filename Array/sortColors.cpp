#include<bits/stdc++.h>
using namespace std;

void sortColor(vector<int>&nums){
  priority_queue<int> pq;
  int n = nums.size();
  for (int i = 0; i < n; i++)
  {
    pq.push(nums[i]);
  }

  while (!pq.empty())
  {
    nums[n] = pq.top();
    pq.pop();
    n--;
  }
}