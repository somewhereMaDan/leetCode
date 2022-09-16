#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

int util(Node* root){
  if(root == NULL) return 0;

  int ln = util(root->left);
  int rn = util(root->right);

  return 1 + max(ln,rn);
}


