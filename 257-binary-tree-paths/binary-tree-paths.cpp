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

    void helper(TreeNode* root, string path,vector<string> &ans){
        
        if(root==NULL) return;
         path += to_string(root->val);
        if(root->left == NULL && root->right==NULL){
            ans.push_back(path);
            return;
        }
        path += "->";
        helper(root->left,path,ans);
        helper(root->right,path,ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string path;
        vector<string>ans;
        helper(root,"",ans);
        return ans;
    }
};