#include<stack>
#include<string>
using namespace std;

class Solution {
public:
   string check(string str)
   {
    stack<char>st;
    for(char c:str)
    {
        if(c!='#')
        {
            st.push(c);
        }
        else{
            if(!st.empty())
            {
                st.pop();
            }
        }
    }
    string res="";
    while(!st.empty())
    {
        res=res+st.top();
        st.pop();
    }
    return res;
   }
    bool backspaceCompare(string s, string t) {
       return check(s)==check(t);
    }
};