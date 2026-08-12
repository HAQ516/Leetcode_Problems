class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++){
            int r=indices[i][0];
            int c=indices[i][1];
            for(int j=0;j<n;j++){
             ans[r][j]++;
            }
            for(int j=0;j<m;j++){
             ans[j][c]++;
            }

        }
        int odd=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]%2==1){
                    odd++;
                }
            }
        }
        return odd;
    }
};