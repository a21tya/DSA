class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if(arr[i]+arr[j]>target){
                j--;
            }
            else if(arr[i]+arr[j]<target){
                i++;
            }
            else{
                return{i+1,j+1};
            }
        }//hswsekmlllll
        return {};
    }
};