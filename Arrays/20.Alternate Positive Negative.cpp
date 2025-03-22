class Solution {
    public:
      void rearrange(vector<int>& arr) {
          vector<int> pos;
          vector<int> neg;
          
      
          for (int num : arr) {
              if (num >= 0) pos.push_back(num);
              else neg.push_back(num);
          }
          
          int i = 0, j = 0, k = 0;
          
     
          while (i < pos.size() && j < neg.size()) {
              if (k % 2 == 0) {
                  arr[k] = pos[i];
                  i++;
              } else {
                  arr[k] = neg[j];
                  j++;
              }
              k++;
          }
          
        
          while (i < pos.size()) {
              arr[k] = pos[i];
              i++;
              k++;
          }
          
         
          while (j < neg.size()) {
              arr[k] = neg[j];
              j++;
              k++;
          }
      }
  };