class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        long long int rev=0;
        int a=x;
        if(x<0)
        return false;
        while(a!=0)
        {
            rem=a%10;
            rev=rev*10+rem;
            a=a/10;
        }
        if(x==rev)
        return true;
        else
        return false;
    }
};