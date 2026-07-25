class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
      int len=s.length();
      int maxlen=0;
      vector<bool>dp(len+1,false);
      for(string &word:wordDict)
      {
        maxlen=max(maxlen,(int)word.length());
      }
      dp[0]=true;
  unordered_set<string>wordSet(wordDict.begin(),wordDict.end());
      for(int i=1;i<=len;i++)
      {
        for(int j=i-1;j>=max(0,i-maxlen);j--)
        {
            if(dp[j] && wordSet.count(s.substr(j,i-j)))
            {
                dp[i]=true;
                break;
            }
        }
      }
      return dp[len];

    }
};