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

    void issame(TreeNode* p, TreeNode *q, bool  &y){
        if(p==nullptr && q==nullptr) return;
        if(p == nullptr || q == nullptr){
           y = false;
            return;
}
        if(p->val != q->val){
                y = false;
                return;
            }

            issame(p->left, q->left, y);
            issame(p->right, q->right, y);
                
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool y = true;
        issame(p,q,y);
        return y;
    }
        
};