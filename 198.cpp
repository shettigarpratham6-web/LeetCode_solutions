#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
     int p=0;
     int q=0;
     for(int num:nums)
     {
        int present=max(p,q+num);
        q=p;
        p=present;
     }
   return p;
    }
};