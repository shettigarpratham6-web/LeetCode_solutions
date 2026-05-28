#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n>m)
        {
            return false;
        }
        vector<int>var1(26,0);
        vector<int>var2(26,0);
        for(int i=0;i<n;i++)
        {
          var1[s1[i]-'a']++;
        }
        for(int i=0;i<m;i++)
        {
            var2[s2[i]-'a']++;
            if(i>=n)
            {
                var2[s2[i-n]-'a']--;
            }

            if(var1==var2)
            {
                return true;
            }
        }
        return false;
    }
};