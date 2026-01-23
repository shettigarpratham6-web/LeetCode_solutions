#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
      unordered_map<char,int>value={
        {'I',1},{'X',10},{'C',100},{'L',50},{'V',5},{'D',500},{'M',1000}
      };
      int result=0;
      for(int i=0;i<s.length();i++)
      {
        if(i+1<s.length() && (value[s[i]]<value[s[i+1]]))
        {
            result=result-value[s[i]];
        }else{
            result=result+value[s[i]];
        }
      }
      return result;
    }
};
int main()
{
    Solution s;
   cout<< s.romanToInt("IV");
    return 0;
}