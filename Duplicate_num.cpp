#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len=nums.size();
        int num=*max_element(nums.begin(),nums.end());
        int number;
        vector<int>res(num+1,0);
        for(int x:nums)
        {
               res[x]++;
        }
        for(int i=0;i<=num;i++)
        {
            if(res[i]>1)
            {
                number=i;
             }
        }
        return number;
    }
};