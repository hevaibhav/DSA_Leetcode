class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> ms;
        unordered_map<char,int> mt;
        for(int i=0;i<s.length();i++){
            ms[s[i]]++;
            mt[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(ms[s[i]]!=mt[s[i]]){
                return false;
            }
        }
        return true;
        
    }
};