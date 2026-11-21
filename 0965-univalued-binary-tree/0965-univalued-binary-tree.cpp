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
void h(TreeNode* r,bool& ans,int prev){
    if(!r || !ans) return;
    if(r->val!=prev){
        ans=false;
        return;
    }
    h(r->left,ans,r->val);
    h(r->right,ans,r->val);
}
    bool isUnivalTree(TreeNode* root) {
        bool ans=true;

        h(root,ans,root->val);
        return ans;
    }
};