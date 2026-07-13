class Solution {
public:
  int print(int n,vector<int>&arr)
  {
    if(n==0 || n==1)
    {
        return 1;
    }
    if(arr[n]!=-1)
    {
        return arr[n];
    }
    arr[n]=print(n-1,arr)+print(n-2,arr);
    return arr[n];
  }
  int climbStairs(int n)
    {
        vector<int> arr(n + 1, -1);

        return print(n, arr);
    }
};