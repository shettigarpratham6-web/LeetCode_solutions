#include<cctype>
#include<iostream>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.length();
        int Count = 0;

        for (int i = 0; i < len; i++) {
            char ch = toupper(word[i]);
            if (word[i] == ch) {
                Count++;
            }
        }

        if (Count == len) 
        return true;         
        if (Count == 0) 
        return true;          
        if (Count == 1 && word[0] == toupper(word[0])) 
        return true; 

        return false;
    }
};