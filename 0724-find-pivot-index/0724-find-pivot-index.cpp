class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len=nums.size();
        vector<int>sum1(len,0);
        vector<int>sum2(len,0);
        sum1[0]=nums[0];
        sum2[len-1]=nums[len-1];
        for(int i=1;i<len;i++)
        {
            sum1[i]=sum1[i-1]+nums[i];
        }
        for(int i=len-2;i>=0;i--)
        {
            sum2[i]=sum2[i+1]+nums[i];
        }
        for(int i=0;i<len;i++)
        {
            if(sum1[i]==sum2[i])
            {
                return i;
            }
        }
        return -1;

    }
};