class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int i=0;

        int ans=0;
        while(n>0){
            int a=!(n%2);
            ans+=a*pow(2,i);
            n=n/2;
            i++;
        }
        
        return ans;
    }
};