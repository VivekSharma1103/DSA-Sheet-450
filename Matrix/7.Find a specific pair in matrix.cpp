class Solution {
    public:
        int findMaxValue(vector<vector<int>>&mat, int N)
        {
            
              vector<vector<int>> maxArr(N, vector<int>(N, 0));
    
        // Initialize bottom-right corner
        maxArr[N-1][N-1] = mat[N-1][N-1];
    
        // Fill last row (right to left)
        for (int j = N-2; j >= 0; j--)
            maxArr[N-1][j] = max(mat[N-1][j], maxArr[N-1][j+1]);
    
        // Fill last column (bottom to top)
        for (int i = N-2; i >= 0; i--)
            maxArr[i][N-1] = max(mat[i][N-1], maxArr[i+1][N-1]);
    
        // Compute max difference
        int maxValue = INT_MIN;
        for (int i = N-2; i >= 0; i--) {
            for (int j = N-2; j >= 0; j--) {
                // Update max difference
                maxValue = max(maxValue, maxArr[i+1][j+1] - mat[i][j]);
    
                // Update maxArr for future use
                maxArr[i][j] = max({mat[i][j], maxArr[i+1][j], maxArr[i][j+1], maxArr[i+1][j+1]});
            }
        }
    
        return maxValue;//Write your code here   
        }
    };