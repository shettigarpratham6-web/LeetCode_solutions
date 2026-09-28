class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n=mat.size();
        int col=mat[0].size();
        if(n*col!=r*c)
        {
            return mat;
        }
        vector<vector<int>>ans(r,vector<int>(c));
        for(int i=0;i<n*col;i++)
        {
            ans[i/c][i%c]=mat[i/col][i%col];
        }
        return ans;
     
    }
};