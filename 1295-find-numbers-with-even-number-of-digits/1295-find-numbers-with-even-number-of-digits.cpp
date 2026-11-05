class Solution {
public:
    int findNumbers(vector<int>& nums) {
       
        int count=0;
        string s;
        for(int x:nums)
        {
         s=to_string(x);
         if((s.length())%2==0)
         {
            count++;
         }
        }
        return count;
    }
};