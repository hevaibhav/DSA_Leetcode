class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string a=s;
        for(int i=0;i<s.length();i++){
            s[indices[i]]=a[i];
        }
        return s;
        
    }
};