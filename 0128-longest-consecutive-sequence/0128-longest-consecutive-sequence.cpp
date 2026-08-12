class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<=1){
            return nums.size();
        }
        priority_queue<int,vector<int>,greater<int>>q;
        for(int n:nums){
            q.push(n);
        }
        int ans=1;
        int temp=1;
        int t=q.top();
        q.pop();
        while(!q.empty()){
         int l=q.top();
         q.pop();
         if(abs(t-l)==1){
            ans++;
         }else if(abs(t-l!=0)){
            if(ans>temp){
                temp=ans;
            }
            ans=1;
         }
         t=l;
        }
        return max(temp,ans);
    }
};