#include<iostream>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
       int n1=s.length();
       int n2=goal.length();
       if(n1!=n2)
       {
        return false;
       }
       for(int i=0;i<n1;i++)
       {
        if(goal[i]==s[0])
        {
            int j=0;
            int k=i;
            while(j<n1)
            {
                if(goal[k]!=s[j])
                {
                 break;   
                }
                k=(k+1)%n1;
                j++;
            }
            if(j==n1) return true;
        }
       }
       return false;
    }
};