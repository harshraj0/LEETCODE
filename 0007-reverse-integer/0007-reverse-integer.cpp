class Solution {
public:
    int reverse(int x) {
         long int a=0;
        while(x!=0)
        {
            a=a*10;
            a+=x%10;
            x=x/10;
            if(a>INT_MAX|| a<INT_MIN)
            {
                return 0;
            }
            
            
        }
        return a;
        
    }
};