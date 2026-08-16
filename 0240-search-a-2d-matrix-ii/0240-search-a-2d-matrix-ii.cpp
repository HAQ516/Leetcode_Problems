class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m=matrix.size();
        int n=matrix[0].size();
        //int l=0,r=m*n-1;
        int i=0,j=n-1; //we are taking 15 as our mid
        while(j>=0 && i<m){
            int mid=matrix[i][j];
            
            if(mid==target){
                return true;
            }else if(mid<target){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};