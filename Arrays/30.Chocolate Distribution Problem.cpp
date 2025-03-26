class Solution {
    public:
      int findMinDiff(vector<int>& a, int m) {
          // code here
          sort(a.begin(),a.end());
          int mindiff = INT_MAX;
          
          int n = a.size();
          int i=0;
          while(i<=n-m ){
              int diff = a[m+i-1] - a[i];
              mindiff = min(mindiff,diff);
              i++;
          }
          return mindiff;
      }
  };