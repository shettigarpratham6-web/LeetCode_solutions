class Solution {
public:
    string removeTrailingZeros(string num) {
      int size=num.size();
      int index=0;
   int i=size-1;
     while(i>=0)
     {
        if(num[i]!='0')
        {
        index=i;
        break;
        }
        i--;
     }
     return num.substr(0,index+1);
      
    }
};