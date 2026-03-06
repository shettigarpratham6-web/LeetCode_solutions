#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       set<int>s1(nums1.begin(),nums1.end());
       set<int>result;
       for(int val:nums2)
       {
        if(s1.count(val))
      {
        result.insert(val);
      }
       }
       return vector<int>(result.begin(),result.end());
    }
};