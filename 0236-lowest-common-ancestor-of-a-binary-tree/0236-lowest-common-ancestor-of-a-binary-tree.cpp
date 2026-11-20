/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* r, TreeNode* p, TreeNode* q) {
        if(!r) return nullptr;
        if(r==p || r==q) return r;
        TreeNode* l=lowestCommonAncestor(r->left,p,q);
        
        TreeNode* ra=lowestCommonAncestor(r->right,p,q);
        if(l && ra) return r;
        if(l) return l;
        return ra;

    }
};