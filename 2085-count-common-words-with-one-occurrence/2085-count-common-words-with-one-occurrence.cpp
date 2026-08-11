class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int ans=0;
        unordered_map<string,int>s;
        for(string st:words1){
            s[st]++;
        }
        unordered_map<string,int>s1;
        for(string st:words2){
            s1[st]++;
        }
        for(auto it=s.begin();it!=s.end();it++){
            if(it->second!=1){
                continue;
            }
            if(s1.find(it->first)!=s1.end()){
                if(s1[it->first]==1){
                    ans++;
                }
            }
        }
        return ans;
    }
};