class Solution {
public:
    int maximum69Number (int num) {
        int x=num;
        int a=0;
        int newn=0;
        int count=0;
        while(x!=0)
        {
            x=x/10;
            count++;
        }
    
        int digi=count-1;
#include <cmath> // Add this at the top

int i = pow(10, digi);
while(digi>=0)
        {
            
            digi--;
            newn=newn*10;
            if(num/i==6)
            {
                newn+=9;
                num=num%i;
                
                return ((newn*i)+num);
            }
            else{
            newn+=num/i;
            num=num%i;
            i = pow(10, digi);
            
            }
            
            
           // i/=10;

        }
        return newn;
        
    }
};