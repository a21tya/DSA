class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int i=0;
        vector<vector<int>> ans;
        for(int i=0; i<n; i++){
        int j=i+1;
        int k=n-1;
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    ans.push_back({arr[i], arr[j], arr[k]});
                    j++;
                    k--;
                    while(j<k && arr[j]==arr[j-1]){
                        j++;
                    }
                }
            }
        }
        return ans;//v hard ques
    }
};