#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};
Node* root = NULL; // initial value of the head node

bool utilCheck(Node* root, int level){
  if(root == NULL) return true;

  
  return utilCheck(root->left,level + 1) && utilCheck(root->right, level + 1); // true if both condition are true
}

bool check(Node* root){
  utilCheck(root,1);  
}