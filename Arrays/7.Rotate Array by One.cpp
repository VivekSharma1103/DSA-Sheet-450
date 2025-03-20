class Solution {
    public:
      void rotate(vector<int> &arr) {
          // code here
          int prev = arr[0];
          int n = arr.size();
          arr[0] = arr[n-1];
          for(int i=1;i<n;i++){
              int temp = arr[i];
              arr[i] = prev;
              prev = temp;
          }
          
      }
  };