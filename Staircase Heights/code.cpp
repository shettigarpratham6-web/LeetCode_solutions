
#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int minBlocks(vector<int>& difficulty) {
      int n=difficulty.size();
      int sum=0;
      vector<int>arr(n,1); 
      for(int i=1;i<n;i++)
      {
          if(difficulty[i]>difficulty[i-1])
          {
             arr[i]=arr[i-1]+1; 
          }
      }
      for(int i=n-2;i>=0;i--)
      {
          if(difficulty[i]>difficulty[i+1])
          {
              arr[i]=max(arr[i],arr[i+1]+1);
          }
      }
      for(int i=0;i<n;i++)
      {
          sum=sum+arr[i];
      }
      return sum;
    }
};
int main() {
    Solution sol;
    vector<int> d1 = {3,1,2,4,2};
    vector<int> d2 = {1,0,2};
    vector<int> d3 = {1,2,2};
    vector<int> d4 = {1};

    cout << sol.minBlocks(d1) << endl; // 11
    cout << sol.minBlocks(d2) << endl; // 5
    cout << sol.minBlocks(d3) << endl; // 4
    cout << sol.minBlocks(d4) << endl; // 1
}
