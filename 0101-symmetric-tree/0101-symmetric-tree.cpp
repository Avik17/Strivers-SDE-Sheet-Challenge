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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return true;
        return solve(root->right,root->left);
    }
    bool solve(TreeNode* right,TreeNode* left){
        if(right==NULL || left==NULL)
        return right==left;
        if(right->val==left->val)
        return solve(right->right,left->left) && solve(left->right,right->left);
      else  return false;

    }
};