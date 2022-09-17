#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

class Solution
{
    public:
    vector<int> ans;
    void inOrder(Node* root){
        if(root==NULL) return;
        
        inOrder(root->left);
        ans.push_back(root->data);
        inOrder(root->right);
    }
    int kthLargest(Node *root, int K)
    {
        if(root==NULL) return -1;
        inOrder(root);
        return ans[ans.size()-K];
    }
};