class Solution {
public:
    long long removeZeros(long long n) {
        string s=to_string(n);
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='0')
            {
                ans=ans+s[i];
            }
        }
        return stoll(ans);
    }
};