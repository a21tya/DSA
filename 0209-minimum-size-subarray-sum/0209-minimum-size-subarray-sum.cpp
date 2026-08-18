class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=0;
        int sum=0;
        int result=INT_MAX;
        while(high<n){
            sum=sum+arr[high];
            while(sum>=target){
                int length=high-low+1;
                result=min(result,length);
                sum=sum-arr[low];
                low++; // firing 
            }
            high++; // hiring
        }
        if(result==INT_MAX){
            return 0;
        }
        else{
            return result;
        }
        
    }

};