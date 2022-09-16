#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* root = NULL;

vector<int> ZigZagTraversal(Node* root){
  vector<int> ans;
  // vector<vector<int>> ans;
  if(root == NULL) return ans; // empty vector
  int count = 1;

  queue<Node*>Q;
  Q.push(root);

  while (!Q.empty())
  {
    vector<int>temp;
    int sz = Q.size(); // no. of elements in one level

    while (sz--) // till it's not zero
    {
      Node* curr = Q.front();
      temp.push_back(curr->data);
      Q.pop();

      if(curr->left) Q.push(curr->left);
      if(curr->right) Q.push(curr->right);
    }
    // vector<int>nodes;
    
    if(count % 2 == 0){
      reverse(temp.begin(),temp.end());
    }
    for (int i = 0; i < temp.size(); i++)
    {
      ans.push_back(temp[i]);
    }

    // for (int i = 0; i < temp.size(); i++)
    // {
      // nodes.push_back(temp[i]);
    // }
    
    count++;
  }
  
}