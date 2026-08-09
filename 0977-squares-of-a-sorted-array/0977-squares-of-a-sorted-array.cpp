class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        int l=0;
        int r=n-1;
        int k=n-1;
        vector<int> squares(n);
        while(l<=r){
            if(abs(arr[l])>=abs(arr[r])){
                squares[k]=arr[l]*arr[l];
                l++;
                k--;
            }
            else{
                squares[k]=arr[r]*arr[r];
                r--;
                k--;
            }
        }
        return squares;
    }
};