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

bool Sametree(TreeNode* l,TreeNode* r){
    if(!l && !r) return true;
    if((!l && r)|| (l && !r)) return false;
    if((l->val==r->val) && Sametree(l->left,r->right) && Sametree(l->right,r->left))
    return true;
    return false;
}
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        
        return Sametree(root->left,root->right);
    }
};