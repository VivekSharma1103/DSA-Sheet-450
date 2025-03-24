class Solution {
    public:
        int maxProduct(vector<int>& arr) {
            if (arr.empty()) return 0;
    
            int maxx = arr[0];
            int minx = arr[0];
            int result = arr[0];
    
            for (int i = 1; i < arr.size(); i++) {
                if (arr[i] < 0) {
                    swap(maxx, minx); 
                }
    
                maxx = max(arr[i], arr[i] * maxx);
                minx = min(arr[i], arr[i] * minx);
    
                result = max(result, maxx);
            }
    
            return result;
        }
    };