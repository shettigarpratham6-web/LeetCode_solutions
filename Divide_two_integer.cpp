#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN and divisor == -1) {
            return INT_MAX;
        }
        return dividend / divisor;
    }
};
int main(){
    Solution s1;
  int dividend,divisor;
  cout<<"Enter the Dividend: ";
  cin>>dividend;
  cout<<"Enter the Divisor: ";
  cin>>divisor;

  cout<<s1.divide(dividend, divisor);

    return 0;
}