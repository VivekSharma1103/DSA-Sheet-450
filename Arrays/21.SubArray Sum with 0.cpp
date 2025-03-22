class Solution {
    public:
      // Complete this function
      // Function to check whether there is a subarray present with 0-sum or not.
      bool subArrayExists(vector<int>& arr) {
          // Your code here
           unordered_map<int, int> prefixSumMap;
          int prefixSum = 0;
          int k=0;
          for (int num : arr) {
              prefixSum += num;
              
              // If prefix sum itself equals k
              if (prefixSum == k) return true;
              
              // If prefixSum - k exists, subarray with sum k exists
              if (prefixSumMap.find(prefixSum - k) != prefixSumMap.end()) {
                  return true;
              }
              
              // Store prefixSum in the map
              prefixSumMap[prefixSum]++;
          }
          
          return false;
      }
  };