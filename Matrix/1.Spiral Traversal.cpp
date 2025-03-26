

class Solution {
    public:
      vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
          // code here
          
         vector<int> result;
          if (matrix.empty() || matrix[0].empty()) return result;
  
          int row_start = 0;
          int row_end = matrix.size() - 1;
          int column_start = 0;
          int column_end = matrix[0].size() - 1;
  
          while (row_start <= row_end && column_start <= column_end) {
              // Traverse from left to right along the top row
              for (int i = column_start; i <= column_end; i++) {
                  result.push_back(matrix[row_start][i]);
              }
              row_start++;
  
              // Traverse from top to bottom along the right column
              for (int i = row_start; i <= row_end; i++) {
                  result.push_back(matrix[i][column_end]);
              }
              column_end--;
  
              // Traverse from right to left along the bottom row
              if (row_start <= row_end) {
                  for (int i = column_end; i >= column_start; i--) {
                      result.push_back(matrix[row_end][i]);
                  }
                  row_end--;
              }
  
              // Traverse from bottom to top along the left column
              if (column_start <= column_end) {
                  for (int i = row_end; i >= row_start; i--) {
                      result.push_back(matrix[i][column_start]);
                  }
                  column_start++;
              }
          }
  
          return result;
      }
  };