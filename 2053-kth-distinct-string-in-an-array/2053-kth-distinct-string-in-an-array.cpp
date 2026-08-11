class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>s;
        for(string st:arr){
            s[st]++;
        }
        int t=0;
        string ans="";
        for(string st:arr){
            if(s[st]==1){
                t++;
                if(t==k){
                    ans+=st;
                    return ans;
                }
            }
        }
        return ans;
    }
};