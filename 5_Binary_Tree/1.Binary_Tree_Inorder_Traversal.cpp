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
   // NeetCode - 250 (BT & BST Problem - 1)
public:
   vector<int> inorderTraversal(TreeNode *root)
   {
      vector<int> arr;
      inorder(root, arr); // call inorder func
      return arr;
   }

private:
   void inorder(TreeNode *root, vector<int> &arr)
   {
      if (root == NULL)
         return;
      inorder(root->left, arr);  // left node traversal
      arr.push_back(root->val);  // push value to the ans array
      inorder(root->right, arr); // right node traversal
   }
};