#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>f(26,0);
        int len=s.length();
        char c;
        for(char ch:s)
        {
            f[ch-'a']++;
        }
        for(int i=0;i<len;i++)
        {
            c=s[i];
            if(f[c-'a']==1)
            {
                return i;
            }
        }
        return -1;
    }
};