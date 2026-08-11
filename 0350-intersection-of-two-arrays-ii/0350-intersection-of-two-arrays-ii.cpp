class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>m1;
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            
                m1[nums1[i]]++;
            
        }
        unordered_map<int,int>m2;
        for(int i=0;i<nums2.size();i++){
                m2[nums2[i]]++;  
        }
        for(auto it:m1){
            if(m2.find(it.first)!=m2.end()){
             if(m1[it.first]<=m2[it.first]){
                for(int i=0;i<m1[it.first];i++){
                    ans.push_back(it.first);
                }
             }else if(m1[it.first]>m2[it.first]){
                for(int i=0;i<m2[it.first];i++){
                    ans.push_back(it.first);
                }
             }

            }
        }
        return ans;
    }
};