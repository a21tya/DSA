class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int officer=0;
        int unique=1;
        int cm=1;
        int n=arr.size();
        while(cm<n){
            if(arr[cm]==arr[cm-1]){
                cm++;
            }
            else{
                arr[officer+1]=arr[cm];
                cm++;
                officer++;
                unique++;
            }
        }
        return unique;
    }
};