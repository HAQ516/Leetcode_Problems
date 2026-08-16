class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int t=n*n;
        vector<vector<int>>ans(n,vector<int>(n));
        int r=ans.size(),c=ans[0].size();
        int a=1;
        int sr=0,er=r-1,sc=0,ec=c-1;
        while(a<=t){
            for(int i=sc;i<=ec;i++){
                ans[sr][i]=a++;
            }
            sr++;
            for(int i=sr;i<=er;i++){
                ans[i][ec]=a++;
            }
            ec--;
            if(sr<=er){
            for(int i=ec;i>=sc;i--){
                ans[er][i]=a++;
            }
            }
            er--;
            if(sc<=ec){
            for(int i=er;i>=sr;i--){
                ans[i][sc]=a++;
            }
            }
            sc++;

        }
        return ans;
    }
};