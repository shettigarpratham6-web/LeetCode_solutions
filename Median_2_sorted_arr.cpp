#include<iostream>
#include<vector>
using namespace std;

class Solution { 
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int k = 0, i = 0, j = 0;
        int n = nums1.size();
        int m = nums2.size();
        int total = n + m;

        vector<int> res(total);


        while (i < n && j < m) {
            if (nums1[i] < nums2[j]) {
                res[k++] = nums1[i++];
            } else {
                res[k++] = nums2[j++];
            }
        }

      
        while (i < n) {
            res[k++] = nums1[i++];
        }

        while (j < m) {
            res[k++] = nums2[j++];
        }

        int len = res.size();

     
        if (len % 2 == 0) {
            return (res[len/2 - 1] + res[len/2]) / 2.0;
        } else {
            return res[len/2];
        }
    }
};