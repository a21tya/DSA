class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        int left=0, right=0;
        vector<int> hash(128,-1);
        while(right< s.size()){
            int preindex= hash[s[right]];
            if(preindex!=-1 && preindex>=left ) {
                left = preindex+1;
            }
            len = max(len,right-left+1);
            hash[s[right]]=right;
            right++;
            //.

        }
        return len;
    }
}; 