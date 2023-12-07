#include<bits/stdc++.h>
using namespace std;

struct TreeNode
{
  int val;
  TreeNode* left;
  TreeNode* right;
};

TreeNode* getNode1(int val){
  TreeNode* newNode = new TreeNode();
  newNode->val = val;
  newNode->left = NULL;
  newNode->right = NULL;
  return newNode;
}

TreeNode* Insert(TreeNode* root, int val){
  if(root == NULL){
    root = getNode1(val);
  }else if(val <= root->val){
    root->left = Insert(root->left, val);
  }else{
    root->right = Insert(root->right,val);
  }
  return root;
}

bool Search(TreeNode* root, int val){
  if(root == NULL) return false;
  if(root->val == val) return true;
  if(val <= root->val) return (root->left, val);
  else{
    return (root->right, val);
  }
}

void postOrder(TreeNode* root){
  if(root == NULL){
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->val << " ";
}

void Min(TreeNode* root){
  if(root == NULL){
    cout << "Tree is empty" << endl;
    return;
  }
  TreeNode* temp = root;
  while (temp->left != NULL)
  {
    temp = temp->left;
  }
  cout << "Minimum element in BST is: " << temp->val << " ";
}
int main(int argc, char const *argv[])
{
  TreeNode *root = NULL;
  root = Insert(root,15);
  root = Insert(root,10);
  root = Insert(root,20);
  root = Insert(root,25);
  root = Insert(root,5);
  root = Insert(root,30);

  postOrder(root);

  int n;
  cout << "enter: " << endl;
  cin >> n;

  if(Search(root, n) == true){
    cout << "true";
  }else{
    cout << "false";
  }
  return 0;
}
