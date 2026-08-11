class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int k=nums.size();
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                m[nums[i][j]]++;
            }
        }
        for(auto it:m){
            if(it.second==k){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};