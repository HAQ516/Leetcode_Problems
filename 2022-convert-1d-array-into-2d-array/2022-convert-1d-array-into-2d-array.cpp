class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        vector<vector<int>>ans(m,vector<int>(n));
        if(o.size()!=m*n) return {};
        for(int i=0;i<o.size();i++){
            ans[i/n][i%n]=o[i];
        }
        return ans;
    }
};