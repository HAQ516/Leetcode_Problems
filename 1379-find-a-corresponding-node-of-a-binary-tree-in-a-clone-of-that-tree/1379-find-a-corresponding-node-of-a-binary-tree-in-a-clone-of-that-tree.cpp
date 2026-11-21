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
void h(TreeNode* c,TreeNode* target,TreeNode*& ans){
   if(!c) return;
   if(c->val==target->val){
    ans=c;
   }
   h(c->left,target,ans);
   h(c->right,target,ans);
}
    TreeNode* getTargetCopy(TreeNode* o, TreeNode* c, TreeNode* target) {
        TreeNode* ans=nullptr;
        h(c,target,ans);
        return ans;
    }
};