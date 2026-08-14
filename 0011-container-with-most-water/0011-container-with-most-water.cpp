class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0,j=h.size()-1;
        int ans=INT_MIN;
        while(i<j){
        int w=abs(i-j);
        int he=min(h[i],h[j]);
        ans=max(ans,w*he);
        if(h[i]<h[j]){
            i++;
        }else if(h[i]>h[j]){
            j--;
        }else{
            i++,j--;
        }
        }
        return ans;
    }
};