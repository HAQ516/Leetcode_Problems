/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
           vector<int>v;
            int s=q.size();
            for(int i=0;i<s;i++){
               Node* t=q.front();
               q.pop();
               v.push_back(t->val);
               for(int i=0;i<t->children.size();i++){
                if(t->children[i]){
                    q.push(t->children[i]);
                }
               }
            //    if(t->left){
            //     q.push(t->left);
            //    }
            //    if(t->right){
            //     q.push(t->right);
            //    }
            }
            ans.push_back(v);
        }
        return ans;
    }
};