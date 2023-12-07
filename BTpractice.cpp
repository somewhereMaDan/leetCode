#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
  int val;
  TreeNode* left;
  TreeNode* right;

  TreeNode(int data){
    val = data;
    left = NULL;
    right = NULL;
  }
};

void preOrder(TreeNode* root){
  if(root == NULL){
    return;
  }
  cout << root->val << " ";
  preOrder(root->left);
  preOrder(root->right);
}

bool sameTree(TreeNode* root, TreeNode* subRoot){
  TreeNode* h1 = root;  
  TreeNode* h2 = subRoot;  

  if(h1 == NULL && h2 == NULL) return true;

  if((h1 == NULL || h2 == NULL) || (h1->val != h2->val)) return false;

  return sameTree(h1->left,h2->left) && sameTree(h1->right, h2->right);
}

bool check(TreeNode* root, TreeNode* subRoot){
  if(root == NULL || subRoot == NULL) return false;

  if(sameTree(root, subRoot) == true){
    return true;
  }else{
    return check(root->left,subRoot) || check(root->right,subRoot);
  }
}

void subTree(TreeNode* root, TreeNode* subRoot){
  if(check(root,subRoot) == true){
    cout << "True" << " " << endl;
  }else{
    cout << "False" << " " << endl;
  }
}

int main(int argc, char const *argv[])
{
  TreeNode* root = new TreeNode(3);
  root->left = new TreeNode(4);
  root->right = new TreeNode(5);
  root->left->left = new TreeNode(1);
  root->left->right = new TreeNode(2);

  TreeNode* subRoot = new TreeNode(4);
  subRoot->left = new TreeNode(1);
  subRoot->right = new TreeNode(2);

  preOrder(root);
  cout << "\n";
  preOrder(subRoot);

  cout << "\n";
  subTree(root,subRoot);
  return 0;
}
