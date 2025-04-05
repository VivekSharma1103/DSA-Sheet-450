class Solution {
    public:
        void nextPermutation(vector<int>& arr) {
            int n = arr.size();
            int i = n - 2;
    
            // Step 1: Find the first decreasing element from the end
            while (i >= 0 && arr[i] >= arr[i + 1]) {
                i--;
            }
    
            if (i >= 0) {
                // Step 2: Find just greater element to swap with arr[i]
                int j = n - 1;
                while (arr[j] <= arr[i]) {
                    j--;
                }
                swap(arr[i], arr[j]);
            }
    
            // Step 3: Reverse the suffix starting from i + 1
            reverse(arr.begin() + i + 1, arr.end());
        }
    };