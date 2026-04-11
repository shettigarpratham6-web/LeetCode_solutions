#include<iostream>
#include<stack>
#include<string>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;

        for (char ch : s) {
            if (!isdigit(ch)) {  
                st.push(ch);
            } else {             
                if (!st.empty()) {
                    st.pop();
                }
            }
        }

        string str = "";
        while (!st.empty()) {
            str = st.top() + str;  
            st.pop();
        }

        return str;
    }
};