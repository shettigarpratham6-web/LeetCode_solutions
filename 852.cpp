#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
     int start=1 , end=arr.size()-2;
      int mid;
      while(start<=end)
      {
        mid=(start+end)/2;
        if(arr[mid-1]<arr[mid] and arr[mid]>arr[mid+1])
        {
            return mid;
        } 
        if(arr[mid-1]<arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
      } 
      return -1; 
    }
};