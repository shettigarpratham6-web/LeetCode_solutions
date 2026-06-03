#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
          int size=names.size();
        vector<pair<int,string>>arr;
        for(int i=0;i<size;i++)
        {
            arr.push_back({heights[i],names[i]});

        }
        sort(arr.begin(),arr.end(),greater<pair<int,string>>());
        for(int i=0;i<size;i++)
        {
            names[i]=arr[i].second;
        }
        return names;
    }
};