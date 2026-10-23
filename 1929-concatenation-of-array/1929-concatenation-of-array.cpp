class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int val=0;
        
        vector<int>ans(2*n,0);
        for(int i=0;i<2*n;i++)
        {
            if(val==n)
            {
              val=0;
            }
            ans[i]=nums[val];
            val++;
        }
        return ans;
    }
};