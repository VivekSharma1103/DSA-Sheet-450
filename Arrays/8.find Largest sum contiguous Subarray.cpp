class Solution {
    public:
      int maxSubarraySum(vector<int> &arr) {
          int maxx = INT_MIN;
          int curr = 0; 
          
          for(int i = 0; i < arr.size(); i++) {
              curr += arr[i];
              maxx = max(maxx, curr); 
              
              
              if (curr < 0) curr = 0;
          }
          return maxx;
      }
  };