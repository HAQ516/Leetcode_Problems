class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1(nums1.begin(),nums1.end());
        unordered_set<int>s2(nums2.begin(),nums2.end());
        vector<vector<int>>ans;
        vector<int>t;
        for(auto it=s1.begin();it!=s1.end();it++){
            if(s2.find(*it)==s2.end()){
                t.push_back(*it);
            }
        }
        ans.push_back(t);
        t.clear();
        for(auto it=s2.begin();it!=s2.end();it++){
            if(s1.find(*it)==s1.end()){
                t.push_back(*it);
            }
        }
        ans.push_back(t);
        return ans;
    }
};