#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int len=nums.size();
        int sum=0;
        for(int i=0;i<len;i++)
        {
          sum=sum+nums[i];
          nums[i]=sum;
        }
        return nums;
    }
};