class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> result;
        int n = digits.size();
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == i) continue;
                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;
                    
                    if (digits[i] != 0 && digits[k] % 2 == 0) {
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                        result.insert(num);
                    }
                }
            }
        }
        
        return result.size();
    }
};