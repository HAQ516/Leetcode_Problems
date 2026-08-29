class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& m, int r, int c) {
        int x=m.size(),y=m[0].size();
        if(x==r && y==c) return m;
        if(x*y!=r*c) return m;
        vector<vector<int>>ans(r,vector<int>(c));
        vector<int>t(x*y);
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[i].size();j++){
                int idx=y*i+j;
                t[idx]=m[i][j];
            }
        }
        for(int k=0;k<t.size();k++){
           int i=k/c;
           int j=k%c;
           ans[i][j]=t[k];
        }
        return ans;
    }
};