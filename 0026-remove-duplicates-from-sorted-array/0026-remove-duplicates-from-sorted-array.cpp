class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        int officer=0;
        int uni=1;
        int cm=1;
        while(cm<n){
            if(arr[cm]==arr[cm-1]){
                cm++;
            }
            else{
                arr[officer+1]=arr[cm];
                officer++;
                uni++;
                cm++;
            }
        }
        return uni;
    }
};