class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            
            int pivot = -1;
            int n = nums.size();
            for(int i=n-1; i>0; i--){
                if(nums[i]>nums[i-1]){
                    pivot = i;
                    break;
                }
            }
            if(pivot == -1){
                reverse(nums.begin(), nums.end());
            }
            else{
                int prev = pivot;
                for(int i=pivot+1; i<n; i++){
                    if(nums[i]>nums[pivot-1] && nums[i]<=nums[prev]){
                        prev = i;
                    }
                }
                swap(nums[pivot-1], nums[prev]);
                reverse(nums.begin() + pivot, nums.end());
            }
        
        }
    
    };