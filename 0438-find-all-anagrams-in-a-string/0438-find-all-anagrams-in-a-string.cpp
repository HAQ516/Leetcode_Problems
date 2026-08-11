class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<int,int>f;
        vector<int>ans;
        for(char c:p){
            f[c]++;
        }
        int k=p.size();
        int i=0,j=0,count=f.size();
        while(j<s.size()){
            if(f.find(s[j])!=f.end()){
              if(f[s[j]]==1){
                count--;
            }
            f[s[j]]--;

          
            }
            if(j-i+1<k){
                j++;
            }else if(j-i+1==k){
                if(count==0){
                    ans.push_back(j-k+1);
                }
                 if(f.find(s[i])!=f.end()){
                if(f[s[i]]==0){
                    count++;
                }
                f[s[i]]++;
                
                 }
                i++;
                j++;
            }
        }

        return ans;
    }
};