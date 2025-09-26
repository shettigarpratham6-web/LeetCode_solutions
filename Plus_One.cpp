#include<iostream>
#include <vector>
using namespace std;



class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        int carry=1;
        for(int i=n-1;i>=0 and carry>0;i--)

        {
            int sum=digits[i]+carry;
            digits[i]=sum%10;

            carry=sum/10;
        }
        if(carry>0)
        {
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};

int main()
{
    Solution s1;
    vector<int> digits = {9,9,9};
    vector<int> res = s1.plusOne(digits);
    cout << "The result is: ";
    for (int val : res)
    {
        cout << val << " ";
    }

    return 0;   
}