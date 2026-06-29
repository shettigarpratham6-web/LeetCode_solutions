class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int maximum = nums[0];

        int product = 1;
        for (int i = 0; i < n; i++) {
            product *= nums[i];
            maximum = max(maximum, product);

            if (product == 0) {
                product = 1;
            }
        }

        product = 1;
        for (int i = n - 1; i >= 0; i--) {
            product *= nums[i];
            maximum = max(maximum, product);

            if (product == 0) {
                product = 1;
            }
        }

        return maximum;
    }
};