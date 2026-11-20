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
    bool isEvenOddTree(TreeNode* root) {
        bool ans=true;
        if(!root) return true;
        int l=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            
            if(l%2==0){
                int value=INT_MIN;
            for(int i=0;i<s;i++){
               TreeNode* t=q.front();
               q.pop();
               if(value>=t->val || t->val%2==0){
                return false;
               }
               value=t->val;
               if(t->left){
                q.push(t->left);
               }
               if(t->right){
                q.push(t->right);
               }
            }
            }else{
                int value=INT_MAX;
                for(int i=0;i<s;i++){
               TreeNode* t=q.front();
               q.pop();
               if(value<=t->val || t->val%2==1){
                return false;
               }
               value=t->val;
               if(t->left){
                q.push(t->left);
               }
               if(t->right){
                q.push(t->right);
               }
            }
            }
            l++;
        }
        return ans;
    }
};