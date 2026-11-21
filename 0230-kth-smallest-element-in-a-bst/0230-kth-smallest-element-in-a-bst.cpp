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
void h(TreeNode* r, int& k, int& c,int& ans){
    if(!r || k<=c) return;
    h(r->left,k,c,ans);
    c++;
    if(k==c){
        ans=r->val;
    }
    h(r->right,k,c,ans);
}
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        int a=0;
        h(root,k,a,ans);
        return ans;
    }
};