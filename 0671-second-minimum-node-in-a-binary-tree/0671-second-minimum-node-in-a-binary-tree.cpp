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
void h(TreeNode* r,int& ans,long long& sec,bool& ch){
      if(!r) return;
      h(r->left,ans,sec,ch);
      if(r->val>ans && r->val<sec){
        sec=r->val;
        ch=true;
      }
     
       h(r->right,ans,sec,ch);
}
    int findSecondMinimumValue(TreeNode* root) {
        int ans=root->val;
        long long sec=LLONG_MAX;
        bool ch=false;
        h(root,ans,sec,ch);
        return (ch==true && sec==LLONG_MAX)?sec:(sec==LLONG_MAX?-1:sec);

    }
};