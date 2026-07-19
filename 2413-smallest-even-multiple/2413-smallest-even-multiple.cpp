class Solution {
public:
    int smallestEvenMultiple(int n) {
      if(n%2==0)
      {
        return n;
      }  
      int num=n*2;
      return num;
    }
};