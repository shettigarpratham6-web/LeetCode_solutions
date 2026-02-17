#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len = nums.size();
        vector<int> res(2, -1);  
        bool found = false;

        for (int i = 0; i < len; i++)
        {
            if (nums[i] == target)
            {
                if (res[0] == -1)     
                    res[0] = i;
                res[1] = i;          
                found = true;
            }
        }

        if (found)
        {
            return res;
        }
        else {
            return {-1, -1};
        }
    }
};