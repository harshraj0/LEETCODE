class Solution {
public:
    bool isPalindrome(string s) {
        string n;
        for(char c: s)
        {
            if(isalnum(c))
                n.push_back(tolower(c));
        }
        int k=n.length();
        for(int i=0;i<k/2;i++)
        {
            if(n[i]!=n[k-1-i])
            return false;
        }
        return true;
        
    }
};