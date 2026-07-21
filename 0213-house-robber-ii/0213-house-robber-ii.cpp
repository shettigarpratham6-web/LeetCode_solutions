class Solution {
public:
   int solve(vector<int>&arr,int l,int h)
   {

    int len=h-l+1;
    vector<int>dp(len);
    if(len==1)
    {
        return arr[0];
    }
    dp[0]=arr[l];
    dp[1]=max(arr[l],arr[l+1]);
    for(int i=2;i<len;i++)
    {
        dp[i]=max(dp[i-1],arr[l+i]+dp[i-2]);
    }
    return dp[len-1];
   }



    int rob(vector<int>& nums) {
        int n=nums.size();
        int res;
        if(n==1)
        {
            return nums[0];
        }
        if(n==2)
        {
            return max(nums[0],nums[1]);
        }
        int first_path=solve(nums,0,n-2);
        int second_path=solve(nums,1,n-1);
        res=max(first_path,second_path);
        return res;

        
    }
};