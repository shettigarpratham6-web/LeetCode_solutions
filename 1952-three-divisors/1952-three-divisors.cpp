class Solution {
public:
      bool isPrime(int n) {
        if (n < 2)
            return false;

        int s = sqrt(n);

        for (int i = 2; i <= s; i++) {
            if (n % i == 0)
                return false;
        }

        return true;
    }
    bool isThree(int n) {
      int r=sqrt(n);
      if(r*r!=n)
      {
        return false;
      }
      return isPrime(r);
    }
};