class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int mdiff=INT_MAX;
        int result_sum;
        for(int i=0; i<n; i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                int diff=abs(sum-target);
                if(sum==target){
                    return sum;
                }
                if(diff<mdiff){
                    mdiff=diff;
                    result_sum=sum;
                }
                if(sum>target){
                    k--;
                    
                }
                else if(sum<target){
                    j++;
                }
            }
        }
        return result_sum;
    }
};