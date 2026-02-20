#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
      int n=nums.size();
      int val;
      for(int i=0;i<n;i++)
      {
        if(target==nums[i])
        {
             val=i;
             break;
        }
        else{
            val=-1;
        }
      } 
      if(val==-1)
      {
           return val;
      } 
      else{
        return val;
      }
    }
};