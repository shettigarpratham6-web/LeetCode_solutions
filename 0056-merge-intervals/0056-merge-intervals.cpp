class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        for (int i = 0; i < intervals.size(); i++) {

            if (ans.empty()) {
                ans.push_back(intervals[i]);
            }
            else {
                int lastEnd = ans[ans.size() - 1][1];
                int currStart = intervals[i][0];
                int currEnd = intervals[i][1];

                if (currStart <= lastEnd) {
                    ans[ans.size() - 1][1] = max(lastEnd, currEnd);
                }
                else {
                    ans.push_back(intervals[i]);
                }
            }
        }

        return ans;
    }
};