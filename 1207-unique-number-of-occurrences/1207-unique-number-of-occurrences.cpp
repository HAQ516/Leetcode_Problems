class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int n:arr){
            m[n]++;
        }
        unordered_set<int>s;
        for(auto it=m.begin();it!=m.end();it++){
            if(s.find(m[it->first])!=s.end()){
                return false;
            }
            s.insert(m[it->first]);
        }
        return true;
    }
};