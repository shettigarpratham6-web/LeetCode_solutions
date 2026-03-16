#include<iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        long count=0;
        long num;
       while(n!=0)
       {
        num=n%2;
        if(num==1)
        {
            count++;
        }
        n=n/2;
       } 
       return count;
    }
};