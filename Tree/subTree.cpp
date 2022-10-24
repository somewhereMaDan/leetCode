#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
};

Node* newNode1(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}

Node* newNode2(int data){
  Node* temp = new Node();
  temp->data = data;
  temp->left = NULL;  temp->right = NULL;
  return temp;
}

bool sameTree(Node* root1, Node* root2){
  if(root1 == NULL && root2 == NULL) return true;
  if((root1 == NULL || root2 == NULL) || (root1->data != root2->data)) return false;
        
    return sameTree(root1->left, root2->left) && sameTree(root1->right, root2->right);
}
    
bool check(Node* root, Node* subRoot){
  if(root == NULL) return false;
  else if(sameTree(root,subRoot)) return true;
  else{
    return (check(root->left, subRoot) || check(root->right, subRoot));
//  OR operator first check if either of the arguments is true and false otherwise.
    }
}
    
bool isSubtree(Node* root, Node* subRoot) {
  if(check(root, subRoot) == true){
    return true;
  }else{
    return false;
  }
}

void preOrder(Node* root){
  if(root == NULL) return;

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

int main(int argc, char const *argv[])
{
  Node* root1 = newNode1(3);
  root1->left = newNode1(4);
  root1->left->left = newNode1(1);
  root1->left->right = newNode1(2);

  Node* root2 = newNode2(4);
  root2->left = newNode2(1);
  root2->right = newNode2(2);

  preOrder(root1);
  cout << "\n";
  preOrder(root2);
  cout << endl;

  if(isSubtree(root1,root2) == true){
    cout << "True" << endl;
  }else{
    cout << "False" << endl;
  }
  return 0;
}

// bool sameTree(TreeNode* root1, TreeNode* root2){
//         if(root1 == NULL && root2 == NULL) return true;
//         if((root1 == NULL || root2 == NULL) || (root1->val != root2->val)) return false;
        
//         return sameTree(root1->left, root2->left) && sameTree(root1->right, root2->right);
//     }
    
//     bool check(TreeNode* root, TreeNode* subRoot){
//         if(root == NULL) return false;
//         else if(sameTree(root,subRoot)) return true;
//         else{
//             return (check(root->left, subRoot) || check(root->right, subRoot));
// //             OR operator first check if either of the arguments is true and false otherwise.
//         }
//     }
    
//     bool isSubtree(TreeNode* root, TreeNode* subRoot) {
//         if(check(root, subRoot) == true){
//             return true;
//         }else{
//             return false;
//         }
//     }