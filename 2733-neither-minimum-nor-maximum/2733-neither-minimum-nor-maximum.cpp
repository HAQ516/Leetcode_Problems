class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3){
            return -1;
        }
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int n:nums){
            if(n>maxi){
                maxi=n;
            }
            if(n<mini){
                mini=n;
            }
        }
        int ans;
        for(int n:nums){
            if(n!=mini && n!=maxi){
                ans=n;
            }
        }
        return ans;
    }
};