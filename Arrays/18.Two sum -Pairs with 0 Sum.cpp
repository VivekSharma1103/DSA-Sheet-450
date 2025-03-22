class Solution {
    public:
      vector<vector<int>> getPairs(vector<int>& arr) {
          set<int> st;
          set<pair<int, int>> uniquePairs;
          
          for (auto &num : arr) {
              if (st.find(-num) != st.end()) {
                  int a = min(num, -num);
                  int b = max(num, -num);
                  uniquePairs.insert({a, b}); 
              }
              st.insert(num);
          }
          
          vector<vector<int>> ans;
          for (auto &p : uniquePairs) {
              ans.push_back({p.first, p.second});
          }
          
          return ans;
      }
  };