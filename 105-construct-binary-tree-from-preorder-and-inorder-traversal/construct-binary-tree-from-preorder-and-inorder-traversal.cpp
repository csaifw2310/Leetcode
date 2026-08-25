class Solution {
public:

    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder) {

        map<int, int> inmap;

        for (int i = 0; i < inorder.size(); i++) {
            inmap[inorder[i]] = i;
        }

        return buildTree(preorder,
                         0,
                         preorder.size() - 1,
                         inorder,
                         0,
                         inorder.size() - 1,
                         inmap);
    }

    TreeNode* buildTree(vector<int>& preorder,
                        int prestart,
                        int preend,
                        vector<int>& inorder,
                        int instart,
                        int inend,
                        map<int, int>& inmap) {

        // No elements
        if (prestart > preend || instart > inend)
            return nullptr;

        // First element of preorder is root
        TreeNode* root = new TreeNode(preorder[prestart]);

        // Find root in inorder
        int inRoot = inmap[root->val];

        // Number of nodes in left subtree
        int numsLeft = inRoot - instart;

        // Build left subtree
        root->left = buildTree(preorder,
                               prestart + 1,
                               prestart + numsLeft,
                               inorder,
                               instart,
                               inRoot - 1,
                               inmap);

        // Build right subtree
        root->right = buildTree(preorder,
                                prestart + numsLeft + 1,
                                preend,
                                inorder,
                                inRoot + 1,
                                inend,
                                inmap);

        return root;
    }
};