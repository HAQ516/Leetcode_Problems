class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>st1;
        stringstream ss(s1);
        string word;
        while(ss>>word){
            st1[word]++;
        }
        stringstream sp(s2);
        while(sp>>word){
            st1[word]++;
        }
        vector<string>ans;
        for(auto it=st1.begin();it!=st1.end();it++){
            if(it->second==1){
                ans.push_back(it->first);
            }
        }
        return ans;

    }
};