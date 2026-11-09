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
void h(TreeNode* r,int& ans,int maxi){
    if(!r) return;
    if(r->val>=maxi){
        ans++;
        maxi=r->val;
    }
    h(r->left,ans,maxi);
     h(r->right,ans,maxi);
}
    int goodNodes(TreeNode* root) {
        int ans=0,maxi=INT_MIN;
        h(root,ans,maxi);
        return ans;
    }
};