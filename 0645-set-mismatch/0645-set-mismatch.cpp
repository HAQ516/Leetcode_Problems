class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>s;
        int n=nums.size(),sum=(n*(n+1))/2,sum1=0;
        int num;
        for(int n:nums){
            if(s.find(n)!=s.end()){
                num=n;
            }
            sum1+=n;
            s.insert(n);
        }
        sum1-=num;
        int num1=sum-sum1;
        return vector<int>{num,num1};
    }
};