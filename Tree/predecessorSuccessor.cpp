#include<bits/stdc++.h>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

// TO Find predecessor of a node, go one left and then extreme right
// TO Find successor of a node, go one right and then extreme left

/*
                  50
                 /  \
               30    70
              / \    / \
            20  40  60 80
*/

Node* inPre(Node* root){
  Node* temp = root->left; // one left
  while (temp->right != NULL)
  {
    temp = temp->right; // extreme right
  }
  return temp; // predecessor
}

Node* inSuc(Node* root){
  Node* temp = root->right; // one right
  while (temp->left != NULL)
  {
    temp = temp->left; // extreme left
  }
  return temp; // successor
}

void PreSuc(Node* root, Node*&pre , Node*&suc, int key){
  if(root == NULL) return;

  if(root->data == key){
    if(root->left){
      pre = inPre(root); // pre will store predecessor node
    }
    if(root->right){
      suc = inSuc(root); // suc will store successor node
    }
    return;
  }

  if(key < root->data){ // if it's less than root data
    suc = root; // we'll initially store the root in suc
    // going down, it'll store the successor node of the key

    // if it reaches leaf node, (20) which doesn't have a left or right in that case
    // we'll just return the suc(30) because it can't have a predecessor
    PreSuc(root->left, pre, suc, key);
  }

  if(key > root->data){
    pre = root;
    PreSuc(root->right, pre, suc, key);
  }
}