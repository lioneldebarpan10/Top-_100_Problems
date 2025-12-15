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
   int maxDepth(TreeNode *root)
   {
      // if root = NULL (empty tree),depth is 0
      if (root == NULL)
      {
         return 0;
      }
      // recursively call leftsubtree to find it's maximum depth
      int leftsubtree = maxDepth(root->left);
      // recursively call rightsubtree to find it's maximum depth
      int rightsubtree = maxDepth(root->right);

      // finding max depth of tree , adding 1 for the current node
      int maxdepth = 1 + max(leftsubtree, rightsubtree);
      return maxdepth;
   }
};