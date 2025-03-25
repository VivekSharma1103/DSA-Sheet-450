class Solution {
    public:
      bool hasTripletSum(vector<int> &arr, int target) {
          // Sort the array
          sort(arr.begin(), arr.end());
          
          // Find the rightmost index where arr[k] < target
          int k;
          for (k = arr.size() - 1; k >= 0; k--) {
              if (arr[k] < target) {
                  break;
              }
          }
          
          int n = k;
          
          for (int i = 0; i < n-1; i++) {
              int j = i + 1;
              int curr = arr[i]; 
              while (j < k) { 
                  int sum = curr + arr[j] + arr[k];
                  
                  if (sum == target) {
                      return true;
                  } 
                  else if (sum > target) {
                      k--;
                  } 
                  else {
                      j++;
                  }
              }
              k=n;
          }
          return false;
      }
  };