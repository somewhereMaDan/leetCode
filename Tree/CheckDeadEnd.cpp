#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

bool util(Node* root, int min, int max){
  if(root == NULL){
    return false;
  }
  if(min == max) return true;
  return util(root->left, min, root->data - 1) || util(root->right, root->data + 1, max);
}

bool deadEnd(Node* root){
  if(root == NULL) return false;
  return util(root, 1, INT32_MAX);
}