class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        if(s.size()<3){
            return *s.rbegin();
        }
        int i=0,ans;
        for(auto it=s.rbegin();it!=s.rend();it++){
            i++;
            if(i==3){
                ans=*it;
            }
        }
        return ans;
    }
};