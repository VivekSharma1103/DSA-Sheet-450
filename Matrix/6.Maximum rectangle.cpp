class Solution {
    public:
        // Function to compute the largest rectangle in a histogram
        int largestRectangleArea(vector<int>& heights) {
            int n = heights.size();
            vector<int> ps(n, -1);  // Previous smaller index
            vector<int> ns(n, n);   // Next smaller index
            stack<int> s;
    
            // Compute previous smaller index
            for (int i = 0; i < n; i++) {
                while (!s.empty() && heights[s.top()] >= heights[i]) {
                    s.pop();
                }
                ps[i] = s.empty() ? -1 : s.top();
                s.push(i);
            }
    
            // Clear stack for next computation
            while (!s.empty()) s.pop();
    
            // Compute next smaller index
            for (int i = n - 1; i >= 0; i--) {
                while (!s.empty() && heights[s.top()] >= heights[i]) {
                    s.pop();
                }
                ns[i] = s.empty() ? n : s.top();
                s.push(i);
            }
    
            // Compute the maximum area
            int maxArea = 0;
            for (int i = 0; i < n; i++) {
                int width = ns[i] - ps[i] - 1;
                maxArea = max(maxArea, heights[i] * width);
            }
    
            return maxArea;
        }
    
        // Function to compute the maximal rectangle in a binary matrix
        int maxArea(vector<vector<int>>& mat) {
            if (mat.empty()) return 0;
    
            int rows = mat.size(), cols = mat[0].size();
            vector<int> heights(cols, 0);
            int maxRectangle = 0;
    
            for (int i = 0; i < rows; i++) {
                // Update the histogram heights
                for (int j = 0; j < cols; j++) {
                    heights[j] = mat[i][j] == 0 ? 0 : heights[j] + 1;
                }
    
                // Compute max area for the updated histogram
                maxRectangle = max(maxRectangle, largestRectangleArea(heights));
            }
    
            return maxRectangle;
        }
    };