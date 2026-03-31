#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;
        int count1 = 0, count2 = 0;

        while (left < n && nums[left] < 0) {
            count1++;
            left++;
        }

        while (right >= 0 && nums[right] > 0) {
            count2++;
            right--;
        }

        return max(count1, count2);
    }
};