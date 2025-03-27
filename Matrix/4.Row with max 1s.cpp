class Solution {
    public:
        int rowWithMax1s(vector<vector<int>> &arr) {
            int n = arr.size();
            int m = arr[0].size();
            int rowIndex = -1;
            int j = m - 1; 
    
            for (int i = 0; i < n; i++) {
                while (j >= 0 && arr[i][j] == 1) {
                    rowIndex = i; 
                    j--; 
                }
            }
            
            return rowIndex;
        }
    };