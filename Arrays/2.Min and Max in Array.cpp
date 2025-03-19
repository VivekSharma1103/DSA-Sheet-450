class Solution {
    public:
      pair<int, int> getMinMax(vector<int> arr) {
          // code here
          return {*min_element(arr.begin(),arr.end()),*max_element(arr.begin(),arr.end())};
      }
  };