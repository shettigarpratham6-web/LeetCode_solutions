// class Solution {
// public:
//     int findGCD(vector<int>& nums) {
//         int n=nums.size();
//         sort(nums.begin(),nums.end());
//         return gcd(nums[0],nums[n-1]);
//     }
// };

class Solution {
public:
    int findGCD(vector<int>& nums) {
    int minimum=*min_element(nums.begin(),nums.end());
    int maximum=*max_element(nums.begin(),nums.end());
    return gcd(minimum,maximum);
    
    }
};