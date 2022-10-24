#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* invert(Node* root){
  if(root == NULL) return root;

  invert(root->left);
  invert(root->right);
  swap(root->left,root->right);

  return root;
}

// if(root == NULL) return root;
        // invertTree(root->left);
        // TreeNode* cont = root->left;
        // invertTree(root->right);
        // root->left = root->right;
        // root->right = cont;
        
        // return root;

// if(!root) return {}; // empty vector
//         vector<vector<int>> result;
        
//         queue<TreeNode*> Q;
//         Q.push(root);
        
//         while(!Q.empty()){ // till Q.empty() is false
//             int count = Q.size();
//             vector<int> level_nodes;
//             for(int i = 0; i < count ; ++i){
                
//                 TreeNode* curr = Q.front();
//                 level_nodes.push_back(curr->val);
                
//                 if(curr->left) Q.push(curr->left);
//                 if(curr->right) Q.push(curr->right);
                
//                 Q.pop();
//             }
//             result.push_back(level_nodes);
//         }
//         return result;