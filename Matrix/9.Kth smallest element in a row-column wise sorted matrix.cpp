int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
   priority_queue<int, vector<int>, greater<int>> minHeap;
   for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           minHeap.push(mat[i][j]);
       }
   }
   while(k-- > 1){
       minHeap.pop();
   }
   return minHeap.top();
}