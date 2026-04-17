#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int len = asteroids.size();
        stack<int> st;

        for (int i = 0; i < len; i++) {
            if (st.empty()) {
                st.push(asteroids[i]);
            }
            else if (st.top() > 0 && asteroids[i] > 0) {
                st.push(asteroids[i]);
            }
            else if (st.top() < 0 && asteroids[i] < 0) {
                st.push(asteroids[i]);
            }
            else {
                bool destroyed = false;

                while (!st.empty() && st.top() > 0 && asteroids[i] < 0) {
                    if (abs(st.top()) < abs(asteroids[i])) {
                        st.pop();
                    }
                    else if (abs(st.top()) == abs(asteroids[i])) {
                        st.pop();
                        destroyed = true;
                        break;
                    }
                    else {
                        destroyed = true;
                        break;
                    }
                }

                if (!destroyed) {
                    st.push(asteroids[i]);
                }
            }
        }

        vector<int> result(st.size());
        for (int i = st.size() - 1; i >= 0; i--) {
            result[i] = st.top();
            st.pop();
        }

        return result;
    }
};