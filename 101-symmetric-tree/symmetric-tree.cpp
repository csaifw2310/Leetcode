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
    
    void helper(TreeNode* lft, TreeNode* ryt, bool &ans){
    
        if(lft==nullptr && ryt==nullptr){
            return;
        }
        if(lft==nullptr || ryt==nullptr){
            ans=false;
            return;
        }
        if(lft->val!=ryt->val){
            ans=false;
            return;
        }
        helper(lft->left,ryt->right,ans);
        helper(lft->right,ryt->left,ans);
        
    }

    bool isSymmetric(TreeNode* root) {
        TreeNode* lft=root->left;
        TreeNode* ryt=root->right;
        bool ans = true;
        helper(lft,ryt,ans);
        return ans;
        
    }
};