class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.length();
        int hash1=0;
        string new1;
        int i=n-1;
        while(i>=0){
            if(s[i]=='#'){
                hash1++;
            }
            else if(hash1>0){
                hash1--;
            }
            else{
                new1.push_back(s[i]);
            }
            i--;
        }
        int m=t.length();
        int hash2=0;
        string new2;
        int j=m-1;
        while(j>=0){
            if(t[j]=='#'){
                hash2++;
            }
            else if(hash2>0){
                hash2--;
            }
            else{
                new2.push_back(t[j]);
            }
            j--;
        }
        if(new1==new2){
            return true;
        }
        return false;
    }
};