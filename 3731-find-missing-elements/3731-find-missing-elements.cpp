class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();

        int minimum = *min_element(nums.begin(), nums.end());
        int maximum = *max_element(nums.begin(), nums.end());

        sort(nums.begin(), nums.end());

        int m = 0;
        vector<int> res;

        for (int i = minimum; i <= maximum; i++) {
            if (m < n && nums[m] == i) {
                m++;
            } else {
                res.push_back(i);
            }
        }

        return res;
    }
};