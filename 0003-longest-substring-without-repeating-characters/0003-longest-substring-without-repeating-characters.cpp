class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0,j=0,maxi=0,count=0;
        unordered_map<char,int> mp;
        while(j<s.size())
        {
            if(mp.find(s[j])!=mp.end())
            count=2;
            mp[s[j]]++;

            if(count<2)
            {
                maxi=max(maxi,j-i+1);
                j++;
            }
            else if(count>=2)
            {
                while(count>=2)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                    mp.erase(s[i]);
                    if(s[i]==s[j])
                    count--;

                    i++;

                }
                j++;          
            }
           
        }
        return maxi;
    }
};