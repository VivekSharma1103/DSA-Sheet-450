class Solution {
    public:
      
      bool isSubset(vector<int> &a, vector<int> &b) {
          int n = a.size();
          int m = b.size();
          unordered_map<int, int> mp;
          int count = 0;
          
          if (n > m) { 
              for (int &i : a) {
                  mp[i]++;
              }
              for (int &j : b) {
                  if (mp[j] > 0) { 
                      mp[j]--;
                      count++;
                  }
              }
              return m == count;
          } 
          else {
              for (int &i : b) {
                  mp[i]++;
              }
              for (int &j : a) {
                  if (mp[j] > 0) {
                      mp[j]--;
                      count++;
                  }
              }
              return n == count;
          }
      }
  };
  