class Solution {
    public:
        int maxWater(vector<int>& height) {
            int left = 0, right = height.size() - 1;
            int left_max = 0, right_max = 0;
            int trap = 0;
            
            while (left < right) {
                // Track the maximum height from left and right
                if (height[left] < height[right]) {
                    // If current left is greater than left_max, update left_max
                    if (height[left] >= left_max) {
                        left_max = height[left];
                    } 
                    // Otherwise, we can trap water at this position
                    else {
                        trap += left_max - height[left];
                    }
                    left++;
                } 
                else {
                    // If current right is greater than right_max, update right_max
                    if (height[right] >= right_max) {
                        right_max = height[right];
                    } 
                    // Otherwise, we can trap water at this position
                    else {
                        trap += right_max - height[right];
                    }
                    right--;
                }
            }
            
            return trap;
        }
    };