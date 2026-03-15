#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=height.size();
        int maximum_value=0;
        int left=0,right=len-1;
        while(left<right)
        {
            int width=right-left;
            int ht=min(height[left],height[right]);
            int  area =width*ht;
            maximum_value=max(maximum_value,area);
            if(height[left]<height[right])
            {
                left++;
            }
            else{
                right--;
            }
        }
        return maximum_value;
    }
};