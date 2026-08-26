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

    TreeNode* buildTree(vector<int>& inorder,
                        vector<int>& postorder) {

        if (inorder.size() != postorder.size())
            return nullptr;

        map<int, int> inmap;

        for (int i = 0; i < inorder.size(); i++) {
            inmap[inorder[i]] = i;
        }

        return buildTree(inorder,
                         0,
                         inorder.size() - 1,
                         postorder,
                         0,
                         postorder.size() - 1,
                         inmap);
    }

    TreeNode* buildTree(vector<int>& inorder,
                        int instart,
                        int inend,
                        vector<int>& postorder,
                        int poststart,
                        int postend,
                        map<int, int>& inmap) {

        if (instart > inend || poststart > postend)
            return nullptr;

        // Root = last element of postorder
        TreeNode* root = new TreeNode(postorder[postend]);

        // Find root in inorder
        int inRoot = inmap[root->val];

        // Number of nodes in left subtree
        int numsleft = inRoot - instart;

        // Left subtree
        root->left = buildTree(
            inorder,
            instart,
            inRoot - 1,
            postorder,
            poststart,
            poststart + numsleft - 1,
            inmap
        );

        // Right subtree
        root->right = buildTree(
            inorder,
            inRoot + 1,
            inend,
            postorder,
            poststart + numsleft,
            postend - 1,
            inmap
        );

        return root;
    }
};