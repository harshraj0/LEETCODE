class Solution {
public:
    int strStr(string haystack, string needle) {
        int a=0;
        int ans=-1;
        for(int i=0;i<haystack.size();i++)
        {
            int j=0;
        
                a=i;
                while(haystack[a]==needle[j])
                {
                    
                    if(j==needle.size()-1){
                    ans=i;
                    break;
                    }
                    j++;
                    a++;
                }
                if(ans!=-1)
                break;
        

            
        }

        return ans;
    }
};