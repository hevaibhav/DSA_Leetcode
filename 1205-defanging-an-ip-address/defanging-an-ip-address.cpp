class Solution {
public:
    string defangIPaddr(string address) {
        int count=0;
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                count++;
            }
        }
        string s(address.length()+(2*count),' ');
        int j=0;
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                s[j]='[';
                s[j+1]='.';
                s[j+2]=']';
                j+=3;
            }else{
                s[j]=address[i];
                j++;
            }
        }
        return s;
        
    }
};