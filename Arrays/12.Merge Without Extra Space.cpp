class Solution {
    public:
      void mergeArrays(vector<int>& a, vector<int>& b) {
          int n = a.size(), m = b.size();
          int i = 0, j = 0;
  
          while (i < n) {
              if (a[i] > b[j]) {
                 
                  swap(a[i], b[j]);
                  
                  int k = j;
                  while (k + 1 < m && b[k] > b[k + 1]) {
                      swap(b[k], b[k + 1]);
                      k++;
                  }
              }
              i++;
          }
      }
  };