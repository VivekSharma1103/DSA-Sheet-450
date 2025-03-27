class Solution {
    public:
      vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
          // code here
          vector<int> p;
          vector<vector<int>> ans(N, vector<int>(N));
  
          for(int i=0;i<N;i++){
              for(int j=0;j<N;j++){
                  p.push_back(Mat[i][j]);
              }
          }
          sort(p.begin(),p.end());
          int index=0;
          for(int i=0;i<N;i++){
              for(int j=0;j<N;j++){
                  ans[i][j]=p[index];
                  index++;
              }
          }
          return ans;
      }
  };