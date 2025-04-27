class Solution {
public:
    int mySqrt(int x) {
        long int a=0;
        while(a*a<x)
        {
            if(a*a>x) return a;
            
            a++;
            if(a*a>x) return a-1;
            
        }
        return a;
        
    }
};