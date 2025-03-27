class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& arr, int target) {
            int row_low = 0;
            int row_high = arr.size() - 1;
            int col_low = 0;
            int col_high = arr[0].size() - 1;
            
            // Binary search to find the correct row
            while (row_low <= row_high) {
                int mid = row_low + (row_high - row_low) / 2;
                if (arr[mid][0] <= target && arr[mid][col_high] >= target) {
                    row_low = mid;
                    break;
                } else if (arr[mid][0] > target) {
                    row_high = mid - 1;
                } else {
                    row_low = mid + 1;
                }
            }
            
            // If row is not found, return false
            if (row_low > row_high) return false;
            
            // Binary search within the selected row
            int row = row_low;
            while (col_low <= col_high) {
                int mid = col_low + (col_high - col_low) / 2;
                if (arr[row][mid] == target) {
                    return true;
                } else if (arr[row][mid] < target) {
                    col_low = mid + 1;
                } else {
                    col_high = mid - 1;
                }
            }
            
            return false;
        }
    };
    