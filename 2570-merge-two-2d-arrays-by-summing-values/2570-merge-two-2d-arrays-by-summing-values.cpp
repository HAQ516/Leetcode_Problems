class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        int m=nums1.size(),n=nums2.size();
        vector<vector<int>>ans;
        int i=0,j=0;
        while(i<m && j<n){
            int a=nums1[i][0];
            int b=nums2[j][0];
            if(a==b){
                ans.push_back({a,nums1[i][1]+nums2[j][1]});
                i++,j++;
            }else if(a<b){
               ans.push_back({a,nums1[i][1]});
               i++;
            }else{
                ans.push_back({b,nums2[j][1]});
                j++;
            }
        }
        while(i<m){
           int a=nums1[i][0];
           ans.push_back({a,nums1[i][1]});
               i++; 
        }
        while(j<n){
             int b=nums2[j][0];
             ans.push_back({b,nums2[j][1]});
                j++;
        }
        return ans;
    }
};