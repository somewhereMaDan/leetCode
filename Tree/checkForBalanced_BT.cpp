#include<iostream>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};
// diffrence between left subtree and right subtree should not be more than 1
Node* root = NULL;

int height(Node* root){
  if(root == NULL) return 1;

  int lh = height(root->left);
  // traversing in left subtree

  if(lh == -1) return -1; 

  int rh = height(root->right);
  if(rh == -1) return -1;

  if(abs(lh-rh) > 1) return -1;
  return max(lh,rh) + 1;
}

bool check(Node* root){
  return height(root) != -1;
}
































// Node* root = NULL;

// int util(Node* root){
//   if(root == NULL) return 0;

//   int ln = util(root->left);
//   if(ln == -1) return -1;
//   int rn = util(root->right);
//   if(rn == -1) return -1;

//   if(abs(ln - rn) > 1) return -1;
//   return 1 + max(ln,rn);
// }

// bool validate(Node* root){
//   return util(root) != -1;
// }


// int util(Node* root){
//   if(root == NULL) return 0;

//   int lh = util(root->left);
//   if(lh == -1) return -1; // this is going to be return value of the function util

//   int rh = util(root->right);
//   if(rh == -1) return -1;

//   if(abs(lh - rh) > 1) return -1; // this -1, is the the returned value to 'lh' or 'rh'
//   return 1 + max(lh,rh);
// }

// bool validate(Node* root){
//   return util(root) != -1;
// }

// int main(int argc, char const *argv[])
// {

//   return 0;
// }
