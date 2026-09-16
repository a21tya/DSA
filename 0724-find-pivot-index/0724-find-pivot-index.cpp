class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n=arr.size();
        vector<int> prefix(n);
        prefix[0]=arr[0];
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        int left,right;
        for(int i=0; i<n; i++){
            if(i==0){
                left=0;
                right=prefix[n-1]-prefix[i];
            }
            else if(i!=0){
                left=prefix[i-1];
                right=prefix[n-1]-prefix[i];
            }
            if(left==right){
                return i;
            }
        }
            return -1;//honest
    }
};