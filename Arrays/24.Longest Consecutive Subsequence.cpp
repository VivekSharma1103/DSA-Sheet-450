class Solution {
    public:
      // Function to return length of longest subsequence of consecutive integers.
      int longestConsecutive(vector<int>& arr) {
          if(arr.empty()) return 0;  
          
          set<int> s(arr.begin(), arr.end());
          int len = 1;
          int mx = 1;
          
          for(auto it = s.begin(); it != prev(s.end()); it++) {
              if((*it) + 1 == *next(it)) {
                  len++;  
              } else {
                  len = 1; 
              }
              mx = max(mx, len); 
          }
  
          return mx;
      }
  };