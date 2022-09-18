#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;

  Node(int val) {
    data = val;
    left = right = NULL;
  }
};

// using call by reference, passing only the address of nums so changes would takes place in main also 

Node* util(vector<int>&nums, int left, int right){
  if(left > right) return NULL; // if it goes outside of the list
  int midpoint = (left+right)/2;
  Node* root = new Node(nums[midpoint]); // creating the root of midpoint
  root->left = util(nums, left, midpoint - 1);
  root->right = util(nums, midpoint + 1, right);

  return root;
}

Node* sortedToBST(vector<int>&nums){
  if(nums.size() == 0) return NULL;
  return util(nums, 0, nums.size()-1); // passing starting and ending point of the vector
}
