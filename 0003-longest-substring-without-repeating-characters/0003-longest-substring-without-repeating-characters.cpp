class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,ans=INT_MIN;
        unordered_map<char,int>f;
        while(j<s.size()){
         f[s[j]]++;
         if(f.size()==j-i+1){
            ans=max(ans,j-i+1);
         }else{
            while(f.size()<j-i+1){
                f[s[i]]--;
                if(f[s[i]]==0){
                    f.erase(s[i]);
                }
                i++;
            }
            
         }
         j++;
        }
        return ans==INT_MIN?0:ans;
    }
};