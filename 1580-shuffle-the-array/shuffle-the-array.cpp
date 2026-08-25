class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(2*n);
        int j=0;
        for(int i=0;i<n*2;i=i+2){
            ans[i]=nums[j];
            ans[i+1]=nums[n+j];
            j++;

        }
        return ans;

        
    }
};