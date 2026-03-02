#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
    
        int count=0;
        int res;
        sort(nums.begin(),nums.end());
      for(int i=0;i<n-1;i++)
      {
         if(nums[i]==nums[i+1])
         {
            count++;
         }
         if(count>((n/2)-1))
         {
           res=nums[i]; 
         } 
        if(nums[i]!=nums[i+1])
        {
            count=0;
        }
      }
      if(n==1)
      {
        res=nums[0];
      }
       
  return res;
    }
};