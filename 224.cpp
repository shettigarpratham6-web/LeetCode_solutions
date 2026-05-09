#include <bits/stdc++.h>
using namespace std;


class Solution {
public:

    int solve(string &s, int &i) {

        int ans = 0;
        long num = 0;
        int sign = 1;

        while(i < s.length()) {

            char ch = s[i];

            if(isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }

            else if(ch == '+') {
                ans = ans + sign * num;
                num = 0;
                sign = 1;
            }

            else if(ch == '-') {
                ans = ans + sign * num;
                num = 0;
                sign = -1;
            }

            else if(ch == '(') {

                i++;

                num = solve(s, i);
            }

            else if(ch == ')') {

                ans = ans + sign * num;

                return ans;
            }

            else if(ch == ' ') {

            }

            i++;
        }

        ans = ans + sign * num;

        return ans;
    }

    int calculate(string s) {

        int i = 0;

        return solve(s, i);
    }
};