#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int rem;
        int num;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        int sum1=0;
        for(int i=0;i<n;i++)
        {
          if(nums[i]>=10)
          {
             num=nums[i];
            while(num!=0)
            {
                rem=num%10;
                num=num/10;
                sum1=sum1+rem;
            }
          }
          else
          {
              sum1=sum1+nums[i];  
          }
        }
        return abs(sum-sum1);
    }
};