#include<iostream>
using namespace std;

class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        {
            return 1;
        }
        long long shift=1;
        while(shift<=n)
        {
            shift<<=1;
        }
        return (shift-1)^n;
    }
};