class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        vector<int> ans(m);
        ans[0]=0;
        for(int i=0;i<m;i++){
            int n=accounts[i].size();
            for(int j=0;j<n;j++){
                ans[i]=accounts[i][j]+ans[i];

            }
        }
        int h=ans[0];
        for(int k=1;k<m;k++){
            if(ans[k]>=h){
                h=ans[k];

            }
            
        }
        return h;
    }
};