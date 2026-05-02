#include<bits/stdc++.h>
using namespace std;



class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
       int low=0, high=0;

       for(int i=0;i<nums.size();i++)
       {
        low=max(low,nums[i]);
        high=high+nums[i];
       } 

       while(low<high)
       {
        int mid=(low+high)/2;
       int s=1, sum=0;
       for(int i=0;i<nums.size();i++)
       {
         if(sum+nums[i]<=mid)
         {
            sum=sum+nums[i];
         }
         else
         {
            s++;
            sum=nums[i];
         }
       }
       if(s>k)
       {
        low=mid+1;
       }
       else
       {
        high=mid;
       }

       }
       return low;
    }
};