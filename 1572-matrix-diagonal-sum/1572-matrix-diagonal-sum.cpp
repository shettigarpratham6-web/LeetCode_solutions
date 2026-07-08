class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int n=mat.size();
      int sum=0;
      int half=n/2;
      for(int i=0;i<n;i++)
      {
        sum=sum+mat[i][i];
        sum=sum+mat[i][n-1-i];
      }
      if(n%2==1)
      {
        sum=sum-mat[half][half];
      }
     return sum;
    }
};