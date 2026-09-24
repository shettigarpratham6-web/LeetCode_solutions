class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int l = *max_element(weights.begin(),weights.end());

        int r=0;

        for (int x : weights)
            r += x;

        int ans = r;

        while (l <= r) {

            int mid = (l + r) / 2;

            int sum = 0;
            int day = 1;

            for (int x : weights) {
                if (sum + x <= mid) {
                    sum += x;
                }
                else {
                    day++;
                    sum = x;
                }
            }

            if (day <= days) {
                ans = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }

        return ans;
    }
};