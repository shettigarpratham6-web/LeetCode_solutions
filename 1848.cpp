#include <vector>
#include <climits>
#include <cmath>
using namespace std;        

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int len = nums.size();
        int index;
        int minimum_value = INT_MAX;

        for (int i = 0; i < len; i++) {
            if (nums[i] == target) {
                index = i;
                minimum_value = min(minimum_value, abs(index - start));
            }
        } 

        return minimum_value;
    }
};