class Solution {
    public:
        int n;
        vector<string> result;
    
        void solve(string &temp, string &s, vector<bool> &visited) {
            if (temp.length() == n) {
                result.push_back(temp);
                return;
            }
    
            for (int i = 0; i < n; ++i) {
                // Skip if already visited
                if (visited[i]) continue;
    
                // Skip duplicates
                if (i > 0 && s[i] == s[i - 1] && !visited[i - 1]) continue;
    
                visited[i] = true;
                temp.push_back(s[i]);
                solve(temp, s, visited);
                temp.pop_back(); // backtrack
                visited[i] = false;
            }
        }
    
        vector<string> findPermutation(string &s) {
            n = s.length();
            sort(s.begin(), s.end()); // Sort to detect duplicates
            string temp = "";
            vector<bool> visited(n, false);
            solve(temp, s, visited);
            return result;
        }
    };
    