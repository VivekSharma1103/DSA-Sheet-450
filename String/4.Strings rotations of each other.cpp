class Solution {
    public:
        // Function to check if two strings are rotations of each other or not.
        bool areRotations(string &s1, string &s2) {
            if (s1.size() != s2.size()) return false;  // Fixing size check
            
            string temp = s1 + s1;  // Concatenating s1 with itself
            return temp.find(s2) != string::npos;  
        }
    };
    