#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        for (int bit = 0; bit < 32; bit++) {

            int ones = 0;

            for (int num : nums) {
                if (num & (1 << bit)) {
                    ones++;
                }
            }

            ans += ones * (n - ones);
        }

        return ans;
    }
};