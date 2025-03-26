class Solution {
    public:
      int minSwap(vector<int>& arr, int k) {
          // code here
          int n = arr.size();
          int i=0;
          int j=n-1;
          int count = 0;
          while(i<j){
              if(arr[i]<=k && arr[j]<=k){
                  i++;
                  
              }
              else if(arr[i]>k && arr[j]>k){
                  j--;
              }
              else if(arr[i]>k && arr[j]<=k){
                  swap(arr[i],arr[j]);
                  count++;
              }
              else{
                  i++;
                  j--;
              }
                  
              }
          
          return count;
      }
  };