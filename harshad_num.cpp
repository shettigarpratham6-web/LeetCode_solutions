#include<iostream>
using namespace std;
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int num=x;
        int sum=0;
        int rem;
        while(x!=0)
        {
            rem=x%10;
            sum=sum+rem;
            x=x/10;
        }
        if(num%sum==0)
        {
            return sum;
        }
        else{
            return -1;
        }
    }
};