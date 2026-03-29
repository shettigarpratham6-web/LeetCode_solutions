#include<iostream>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        long long shift=1;
        while(shift<=num)
        {
            shift<<=1;
        }
        return (shift-1)^num;
    }
};