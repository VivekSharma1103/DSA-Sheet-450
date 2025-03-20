class Solution {
    public:
    int getMinDiff(vector<int>& arr, int k) {
          if (arr.size() <= 1) return 0;
  
          sort(arr.begin(), arr.end());
          int n = arr.size();
  
         
          int result = arr[n - 1] - arr[0];
  
          for (int i = 0; i < n - 1; i++) {
              int high = max(arr[n - 1] - k, arr[i] + k); 
              int low = min(arr[0] + k, arr[i + 1] - k); 
  
              if (low < 0) continue; 
  
              result = min(result, high - low); 
              }
  
          return result;
      }
  };