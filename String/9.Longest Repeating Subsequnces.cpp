
class Solution {
    public:
        int LongestRepeatingSubsequence(string &s) {
            int n = s.length();
            vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (s[i - 1] == s[j - 1] && i != j) {  // Ensure different indices
                        dp[i][j] = 1 + dp[i - 1][j - 1];
                    } else {
                        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                    }
                }
            }
    
            return dp[n][n];  // Length of longest repeating subsequence
        }
    };