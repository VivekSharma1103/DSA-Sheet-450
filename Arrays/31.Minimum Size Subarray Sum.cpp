class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
          int i=0;
          int j=0;
           int n = nums.size();
           int sum = 0;
           int mn = INT_MAX;
          while(j<n){
               sum+=nums[j];
               while(sum>=target){
                  sum-=nums[i];
                  mn = min(mn,j-i+1);
                  i++;
               }
               j++;
               
          }
          return mn == INT_MAX ? 0:mn;
        }
    };