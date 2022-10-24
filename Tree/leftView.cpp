#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

// void leftViewUtil(Node* root, int level, vector<int> &ans){
//   if(root == NULL) return;
//   if(ans.size()==level) ans.push_back(root->data);
//   leftViewUtil(root->left,level + 1, ans);
//   leftViewUtil(root->right,level + 1, ans);
// }

// vector<int> leftView(Node *root)
// {
//   vector<int> ans;
//   leftViewUtil(root,0,ans);
//   return ans; // whatever changes that had been done in the function leftViewUtil to ans, with that changes it would return 
// }

vector<int> leftView(Node *root){
  vector<int> ans;
  if(!root) return ans;
  queue<Node*>q;
  q.push(root);

  while(q.empty() == false){
    int s = q.size();
    ans.push_back(q.front()->data);
    while (s--)
    {
      Node* curr = q.front();
      if(curr->left) q.push(curr->left);
      if(curr->right) q.push(curr->right);
      q.pop();
    }
  }
  return ans;
}
