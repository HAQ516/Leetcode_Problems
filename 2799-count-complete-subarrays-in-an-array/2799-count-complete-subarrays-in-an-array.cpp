class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
         int ans=0;
         int n=nums.size();
        unordered_map<int,int>f;
        for(int n:nums){
            f[n]++;
        }
        int t=f.size();
        if(t==1){
            return (n*(n+1))/2;
        }else if(t==n){
            return 1;
        }
        f.clear();
        for(int i=0;i<nums.size();i++){
            set<int>s;
            for(int j=i;j<nums.size();j++){
                s.insert(nums[j]);
                if(s.size()==t){
                    ans++;
                }
            }
        }
        return ans;
    }
};