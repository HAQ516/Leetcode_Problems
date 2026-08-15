class Solution {
public:
    int trap(vector<int>& h) {
        if(h.size()==1) return 0;
        int n=h.size();
        vector<pair<int,int>>t(h.size());
        t[0]={h[0],h[n-1]};
        int lm=h[0],rm=h[n-1];
        for(int i=1;i<n;i++){
           if(h[i]>lm){
            lm=h[i];
            
           }
           t[i].first=lm;
        }
        for(int i=n-2;i>=0;i--){
           if(rm<h[i]){
            rm=h[i];
           }
            t[i].second=rm;

        }
        int ans=0;
        for(int i=1;i<t.size()-1;i++){
            int mini=min(t[i].first,t[i].second);
            ans+=abs(mini-h[i]);
        }
        return ans;
    }
};