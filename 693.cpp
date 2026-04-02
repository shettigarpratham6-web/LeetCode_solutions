#include<iostream>
using namespace std;
class Solution {
public:
    bool hasAlternatingBits(int n) {
       long x;
       x=n^(n>>1);
       if((x&(x+1))==0)
       {
        return true;
       } 
       return false;
    }
};