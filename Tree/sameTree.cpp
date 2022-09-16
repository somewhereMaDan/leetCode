#include<iostream>
using namespace std;

struct Node{
  int val;
  Node* left;
  Node* right;
};

bool isSameTree(Node* p, Node* q) {
  if(p == NULL && q == NULL) return true;
  if((p != NULL || q != NULL) || (p->val != q->val)) return false;

  return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
}