#include<iostream>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int num = x;

        long int rev = 0, rem;

        while (x != 0)
        {
            if (x < 0)
            {
                break;
            }
            else
            {
                rem = x % 10;
                rev = rev * 10 + rem;
                x = x / 10;
            }
        }
        if (num == rev)
        {
            return true;
        }

        else
        {
            return false;
        }
    }
};
int main()
{
    Solution s1;
    int num;
    cout<<"Enter an integer: ";
    cin>>num;
    if(s1.isPalindrome(num)==true)
    {
        cout<<num<<" is a Palindrome";
    }
    else{
        cout<<num<<" is not a Palindrome";
    }
    return 0;
}
