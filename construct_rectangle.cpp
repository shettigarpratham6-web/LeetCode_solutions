#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int res=1;
        for(int i=1;i*i<=area;i++)
        {
            if(area%i==0)
            {
                res=i;
            }
        }
        return {area/res,res};
    }
};