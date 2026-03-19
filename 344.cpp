#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
          int l=0;
          int q=s.size()-1;
          while(l<q)
          {
            swap(s[l],s[q]);
            l++;
            q--;
          }
    }
};