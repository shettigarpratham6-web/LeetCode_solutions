#include <vector>
#include <string>
#include <stack>    
using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        int len = operations.size();
        stack<int> st;

        for(int i = 0; i < len; i++)
        {
            string ch = operations[i];

            if(ch == "C")
            {
                if(!st.empty())
                    st.pop();
            }
            else if(ch == "D")
            {
                int num = st.top();
                st.push(num * 2);
            }
            else if(ch == "+")
            {
                int top1 = st.top(); st.pop();
                int top2 = st.top();
                st.push(top1);
                st.push(top1 + top2);
            }
            else
            {
                st.push(stoi(ch));  
            }
        }

        int sum = 0;
        while(!st.empty())
        {
            sum += st.top();
            st.pop();
        }

        return sum;
    }
};