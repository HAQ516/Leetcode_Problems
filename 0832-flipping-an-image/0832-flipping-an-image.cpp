class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image[0].size();
        vector<vector<int>>ans=image;
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<n/2;j++){
            if(ans[i][j]==0){
                ans[i][j]=1;
            }else if(ans[i][j]==1){
                ans[i][j]=0;
            }
            if(ans[i][n-j-1]==1){
                ans[i][n-j-1]=0;
            }else if(ans[i][n-j-1]==0){
                ans[i][n-j-1]=1;
            }
            swap(ans[i][j],ans[i][n-j-1]);

            }
            if(n%2==1){
            int j=n/2;
            if(ans[i][j]==0){
                ans[i][j]=1;
            }else if(ans[i][j]==1){
                ans[i][j]=0;
            }
            
        }
        
        }
        
        return ans;
    }
};