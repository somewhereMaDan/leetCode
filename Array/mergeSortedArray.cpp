#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    vector<int> ans;
    // for(int i = 0; i <= m; i++)
    int i = 0;
    while (nums1[i] != 0 && (!nums2.empty()))
    {
        if (nums1[i] < nums2[i])
        {
            ans.push_back(nums1[i]);
        }
        else if (nums2[i] < nums1[i])
        {
            ans.push_back(nums2[i]);
        }
        i++;
    }
    while (nums1[i] != 0)
    {
        ans.push_back(nums1[i]);
    }
    while (!nums2.empty())
    {
        ans.push_back(nums2[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        nums1[i] = ans[i];
    }
}