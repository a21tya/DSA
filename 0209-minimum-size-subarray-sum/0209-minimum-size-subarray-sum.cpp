class Solution {
public:
    int minSubArrayLen(int target, vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int high=0;
        int sum=0;
        int result=INT_MAX;
        for(int high=0; high<n; high++){
            sum=sum+arr[high];
            while(sum>=target){
                int length=high-low+1;
                result=min(result,length);
                sum=sum-arr[low];
                low++;
            }
        }
        if(result==INT_MAX){
            return 0;
        }
        else{
            return result;
        }
    }
};