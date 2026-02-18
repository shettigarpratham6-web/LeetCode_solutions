#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int len=nums.size();
        int sum=0;
        int ans=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
         for(int i=0;i<len-2;i++)
         {
                int left=i+1;
                int right=len-1;
                while(left<right)
               {
                sum=nums[i]+nums[left]+nums[right];
                if (abs(sum - target) < abs(ans - target))
                    ans = sum;

                if (sum == target)
                    return sum;
                else if (sum < target)
                    left++;
                else
                    right--;

               }
         }
     
        return ans;
    
    }
};