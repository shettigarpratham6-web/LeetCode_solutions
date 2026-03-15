#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
int print(vector<int>& arr,int start,int end)
{
  int prev1=0;
  int prev2=0;
  int ans;

  for(int i=start;i<=end;i++)
  {
 ans=max(prev1,prev2+arr[i]);
    prev2=prev1;
   prev1=ans;


  }
  return prev1;

}
    int rob(vector<int>& nums) {
        int n=nums.size();
          if(n==1)
  {
    return nums[0];
  }
        int num1=print(nums,0,n-2);
        int num2=print(nums,1,n-1);


       return max(num1,num2); 
    }
};