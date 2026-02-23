#include<iostream>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {

       
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long res;
        bool negative = false;

   
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
            negative = true;

        long long a = llabs((long long) dividend);
        long long b = llabs((long long) divisor);

        res = a / b;

        return negative ? -res : res;
    }
};