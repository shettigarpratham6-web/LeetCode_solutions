#include<vector>
using namespace std;

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int len=nums.size();
        int count1=0;
        
        for(int i=0;i<len;i++)
        {
            int n=nums[i];
            int count2=0;
            while(n>0)
            {

             n=n/10;
             count2++;
            }
            if(count2%2==0)
            {
              count1++;
            }
        }
        return count1;
    }
};