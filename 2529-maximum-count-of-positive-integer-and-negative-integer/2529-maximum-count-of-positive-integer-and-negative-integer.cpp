class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int l=0,r=nums.size()-1,n=nums.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==0){
            ans=mid;
            r=mid-1;
            }else if(nums[mid]<0){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        int a;
        if(ans==-1){
         return max(l,n-l+1);
        }
        int foccur=ans;
        l=0,r=nums.size()-1,n=nums.size()-1;
        ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==0){
            ans=mid;
            l=mid+1;
            }else if(nums[mid]<0){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        
        return max(foccur,n-ans);
    }
};