class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddnum=1;
        int oddsum=0;
        int evennum=0;
        int evensum=0;
        for(int i=0;i<n;i++)
        {
           oddnum=oddnum+2;
           oddsum=oddsum+oddnum;

           evennum=evennum+2;
           evensum=evensum+evennum;
        }
        return gcd(oddsum,evensum);
    }
};