class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    ans.push_back(nums1[i]);
                    j=nums2.size()-1;
                }
            }
        }
        unordered_map<int,int> mp;
        for(int i=0;i<ans.size();i++){
            mp[ans[i]]++;
        }
        vector<int> finall;
        for(int i=0;i<ans.size();i++){
            if(mp[ans[i]]>0){
                finall.push_back(ans[i]);
                mp[ans[i]]=0;
            }
        }

        return finall;
    }
};