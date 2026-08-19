class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        int officer=0;
        int cm=1;
        int unique=1;
        while(cm<n){
            if(arr[cm]==arr[cm-1]){
                cm++;
            }
            else{
                arr[officer+1]=arr[cm];
                officer++;
                cm++;
                unique++;
            }
        }
        return unique;

    }
};