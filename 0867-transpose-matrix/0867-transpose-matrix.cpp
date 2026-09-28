class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<vector<int>>ans(col,vector<int>(row));
        for(int i=0;i<row*col;i++)
        {
           ans[i/row][i%row]=matrix[i%row][i/row];
        }
        return ans;
    }
};