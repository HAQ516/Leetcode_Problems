class Solution {
public:
bool self(int n){
    int num=n;
    while(n!=0){
        int d=n%10;
        if(d==0 || num%d!=0){
            return false;
        }
        n/=10;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++){
            if(self(i)==true){
                ans.push_back(i);
            }
        }
        return ans;
    }
};