class Solution {
    public:
      
      int findUnion(vector<int>& a, vector<int>& b) {
          map<int, int> mp;
          
          for(int i = 0; i < a.size(); i++) {
              mp[a[i]]++;
          }
          
         
          for(int i = 0; i < b.size(); i++) {
              mp[b[i]]++;
          }
          
        
          return mp.size();
      }
  };