#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       int len=nums.size();
      vector<int>ans(2*len);
    
      for(int i=0;i<(2*len);i++)
      {
        ans[i] = nums[i % len];

      }
      return ans;
    }
};