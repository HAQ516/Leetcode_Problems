class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if((arr[mid]-(mid+1))==k){
                ans=mid;
                r=mid-1;
            }else if((arr[mid]-(mid+1))<k){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        ans=ans==-1?l:l;
        return ans+k;
    }
};