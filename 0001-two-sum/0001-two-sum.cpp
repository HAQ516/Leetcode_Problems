class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
       multimap<int,int>m;
        for(int i=0;i<nums.size();i++){
            m.insert({nums[i],i});
        }
        //sort(nums.begin(),nums.end())
        auto a=m.begin(),b=m.end();
        b--;
        while(a!=b){
            if(a->first+b->first==target){
                ans.push_back(a->second);
                ans.push_back(b->second);
                return ans;
            }else if(a->first+b->first>target){
                b--;
            }else if(a->first+b->first<target){
                a++;
            }
        }
        return ans;
    }
};