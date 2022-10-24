#include<iostream>
using namespace std;

struct Node{
  int val;
  Node* left;
  Node* right;
};

bool isSameTree(Node* p, Node* q) {
  Node* h1 = p;
  Node* h2 = q;

  if(h1 == NULL && h2 == NULL) return true;
  if((h1 == NULL || h2 == NULL) || (h1->val != h2->val)) return false;

  return isSameTree(h1->left,h2->left) && isSameTree(h1->right,h2->right);
}