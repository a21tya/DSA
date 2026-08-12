class Solution {
    bool isvowel(char c){
            return c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U';
        }
public:
    string reverseVowels(string s) {
        // bool isvowel(char c){
        //     return c='a' || c='e' || c='i' || c='o' || c='u' || c='A' || c='E' || c='I' || c='O' || c='U'
        // }
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<=j){
            if(!isvowel(s[i])){
                i++;
            }
            else if(!isvowel(s[j])){
                j--;
            }
            else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};