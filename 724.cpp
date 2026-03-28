#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
       int len=nums.size();
       int left=0;
    
       int sum1=0;
       int sum2=0;
       int index=-1;
      for(int i=0;i<len;i++)
      {
        sum2=sum2+nums[i];
      }
      while(left<len)
      {
        sum2=sum2-nums[left];
        if(sum1==sum2)
        {
          index=left;
          break;
        }
        sum1=sum1+nums[left];
        left++;
      }
      return index;
    }
};