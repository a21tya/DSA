class Solution {
public:
    void sortColors(vector<int>& arr) {
     int n=arr.size();
     int start=0;
     int mid=0;
     int end=n-1;
     while(mid<=end){
        if(arr[mid]==0){
            swap(arr[mid],arr[start]);
            mid++;
            start++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{// arr[mid]==2
            swap(arr[mid],arr[end]);
            end--;
        }
     }   
    }
};