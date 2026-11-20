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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<int,TreeNode*>>q;
        q.push({-1,root});
        bool f=false,sec=false;
        int par_f=0,par_s=0;
        while(!q.empty()){
           
            int s=q.size();
            for(int i=0;i<s;i++){
               auto t=q.front();
               q.pop();
               if(t.second->left){
                q.push({t.second->val,t.second->left});
               }
               if(t.second->right){
                q.push({t.second->val,t.second->right});
               }
               if(t.second->val==x){
                f=true;
                par_f=t.first;
               }
               if(t.second->val==y){
                sec=true;
                par_s=t.first;
               }
            }
            if(f && sec && par_f!=par_s){
                return true;
            }else{
                f=false,sec=false;
                par_f=0,par_s=0;
            }
        }
        return false;
    }
};