#include<iostream>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       int frequency[26]={0};
       for(char ele:magazine)
       {
        frequency[ele-'a']++;
        
       }
       for(char ele:ransomNote)
       {
        frequency[ele-'a']--;
        if(frequency[ele-'a']<0)
        {
            return false;
        }
       }
      return true; 
    }
};