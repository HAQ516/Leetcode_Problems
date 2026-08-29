class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++){
            for(int j=i+1;j<m.size();j++){
                swap(m[j][i],m[i][j]);
            }
        }
        for(int i=0;i<m.size();i++){
            int j=0,k=m[i].size()-1;
            while(j<k){
                swap(m[i][j],m[i][k]);
                j++,k--;
            }
        }
    }
};