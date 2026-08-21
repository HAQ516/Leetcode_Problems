class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans=-1;
        vector<int>a(2,-1);
        int l=0,r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                r=mid-1;
            }else if(nums[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        a[0]=ans;
        ans=-1;
        l=0,r=nums.size()-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                ans=mid;
                l=mid+1;
            }else if(nums[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        a[1]=ans;
        return a;

    }
};