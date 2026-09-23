class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        int k=n-1;
        vector<int> sq(n);
        while(i<=j){
            if(abs(arr[i])> abs(arr[j])){
                sq[k]=arr[i]*arr[i];
                i++;
                k--;
            }
            else{
                sq[k]=arr[j]*arr[j];
                j--;
                k--;
            }
        }
        return sq;
    }
};