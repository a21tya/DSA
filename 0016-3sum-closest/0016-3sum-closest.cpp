class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int i=0;
        int min_diff=INT_MAX;
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
                else if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
                if(diff<min_diff){
                    min_diff=diff;
                    result_sum=sum;
                }
            }
        }
            return result_sum;
    }
};