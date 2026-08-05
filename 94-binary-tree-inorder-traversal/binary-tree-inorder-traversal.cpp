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
    void intraverse(TreeNode* root, vector<int>& ans){
        if(root==nullptr){
            return;
        }
        intraverse(root->left,ans);
        ans.push_back(root->val);
        intraverse(root->right,ans);
    }

    vector<int> inorderTraversal(TreeNode* root) {
         vector<int>ans;
         intraverse(root,ans);
         return ans;
    }
};