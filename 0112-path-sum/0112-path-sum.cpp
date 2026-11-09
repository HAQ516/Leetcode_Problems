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
// void h(TreeNode* r, int t, int& c,bool& ans){
//     if(!r) return;
//     c+=r->val;
//     if((!r->left && !r->right) && c==t) ans=true;
//     h(r->left,t,c,ans);
//     h(r->right,t,c,ans);
//     c-=r->val;
// }
    bool hasPathSum(TreeNode* r, int t) {
        // bool ans=false;
        // int c=0;
        // h(r,t,c,ans);
        // return ans;
        if(!r) return false;
        t-=r->val;
        return ((!r->left && !r->right) && t==0) ||
          hasPathSum(r->left,t) ||
          hasPathSum(r->right,t);
          
    }
};