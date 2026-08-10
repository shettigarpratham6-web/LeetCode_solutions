/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  bool isSametree(TreeNode* r,TreeNode* s)
  {
    if(r==nullptr and s==nullptr)
    {
        return true;
    }
    else if(r==nullptr || s==nullptr)
    {
        return false;
    }
    else if(r->val==s->val)
    {
        return isSametree(r->left,s->left) and isSametree(r->right,s->right);
    }else
    {
        return false;
    }
  }
    bool isSubtree(TreeNode* r, TreeNode* s) {
        if(r==nullptr)
        {
            return false;
        }
        else if(isSametree(r,s))
        {
            return true;
        }
        else{
            return isSubtree(r->left,s) || isSubtree(r->right,s);
        }
    }
};