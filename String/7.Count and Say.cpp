class Solution {
    public:
        string count(string &result) {
            if (result.empty()) return "1";  // Base case for the first call
    
            string newResult = "";
            int count = 1;
    
            // Traverse the string and count consecutive characters
            for (int i = 1; i < result.size(); i++) {
                if (result[i] == result[i - 1]) {
                    count++;
                } else {
                    newResult += to_string(count) + result[i - 1];  // Append count and character
                    count = 1;
                }
            }
            newResult += to_string(count) + result.back();  // Add the last character count
            
            return newResult;
        }
    
        string countAndSay(int n) {
            string result = "1";  // Start with "1"
    
            for (int i = 1; i < n; i++) {
                result = count(result);  // Update result iteratively
            }
    
            return result;
        }
    };