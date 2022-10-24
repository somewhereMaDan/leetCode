#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
   int val;
   TreeNode* left;
   TreeNode* right;
};

bool IsUtil(TreeNode *root, int minValue, int maxValue)
{
  if (root == NULL)
    return true;
  else if (root->val > minValue && root->val < maxValue && IsUtil(root->left, minValue, root->val) && IsUtil(root->right, root->val, maxValue))
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool isValidBST(TreeNode *root)
{
  return IsUtil(root, INT32_MIN, INT32_MAX);
}