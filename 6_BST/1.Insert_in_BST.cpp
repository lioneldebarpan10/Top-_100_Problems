#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
   int val;
   TreeNode *left;
   TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
   TreeNode *insertIntoBST(TreeNode *root, int val)
   {
      // if root is null then insert node
      if (root == NULL)
      {
         return new TreeNode(val);
      }
      // if val is less than root recurse left subtree
      if (val < root->val)
      {
         root->left = insertIntoBST(root->left, val);
      }
      // if val is more than root recurse right subtree
      else
      {
         root->right = insertIntoBST(root->right, val);
      }
      return root;
   }
};