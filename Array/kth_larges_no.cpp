#include<bits/stdc++.h>
using namespace std;

// We used priorty queue here so we don't have to sort the elements
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < nums.size(); i++) { // if we want to get 2nd largest then it would go till size '2'
            pq.push(nums[i]); // it'll push till the 2 elements 
            if(pq.size() > k) // restriction is till 2 elements
                pq.pop(); // it'll pop the element if the queue will have more than 2 elements 
//             it'll pop the first element, so in priorty queue it'll pop the smallest element(fromt the front)
        }
        return pq.top(); // at last when all the elements have been pushed and smallest have been poped then
//         we'll return the top which will be 2nd largest element of the arraty
            
    }
};