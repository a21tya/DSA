class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n =arr.size();
        int start=0;
        int middle=0;
        int end=n-1;
        while(middle<=end){
            if(arr[middle]==0){
                swap(arr[middle],arr[start]);
                start++;
                middle++;
            }
            else if(arr[middle]==2){ 
                swap(arr[middle],arr[end]);
                end--;
                // start++;
                // middle++;
            }
            else if(arr[middle]==1){
                middle++;
            }
        }
    }
};