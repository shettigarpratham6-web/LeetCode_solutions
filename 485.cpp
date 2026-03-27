#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count1=0;
        int count2=0;
       for(int i=0;i<n;i++)
       {
        if(nums[i]==1)
        {
            count1++;
           count2=max(count1,count2);
        }else{
            count1=0;
        }
       
       }
       return count2;
    }
};