
  #include <bits/stdc++.h>
  using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
  int top(TreeNode* root)
  {
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(top(root->left),top(root->right));
  }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        int left=top(root->left);
        int right=top(root->right);
        if(abs(left-right)>1)
        {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);

    }
};