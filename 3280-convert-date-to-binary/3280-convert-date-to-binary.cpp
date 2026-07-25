class Solution {
public:
   string tobinary(int val)
   {
    if(val==0)
    {
        return "0";
    }
    string ans="";

  int rem;
     while(val>0)
     {
      rem=val%2;

      ans=ans+char(rem+'0');
     val=val/2;
     }
     reverse(ans.begin(),ans.end());
     return ans ;
   }
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,7));
        int day=stoi(date.substr(8,10));
        return tobinary(year)+"-" + tobinary(month)+"-" + tobinary(day);

    }
};