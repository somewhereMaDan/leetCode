#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
  int val;
  TreeNode* left;
  TreeNode* right;
};

vector<vector<int>> levelOrder(TreeNode* root){
  queue<TreeNode*>q;
  vector<vector<int>> result;
  if(root == NULL) return {};
  q.push(root);

  while (!q.empty())
  {
    int count = q.size();
    vector<int>level_nodes;

    for (int i = 0; i < count; ++i)
    {
      TreeNode* temp = q.front();
      level_nodes.push_back(temp->val);
      if(temp->left) q.push(temp->left);
      if(temp->right) q.push(temp->right);

      q.pop();
    }
    result.push_back(level_nodes);
  }
  return result;
}