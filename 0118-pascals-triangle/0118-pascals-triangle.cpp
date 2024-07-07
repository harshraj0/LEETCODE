class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>a;
        int row=0,j;
        a.push_back({1});
        for(row=1;row<numRows;row++)
        {
            vector<int>temp;
            temp.push_back(1);
            int res=1;
            for(j=1;j<=row;j++)
            {
                res=res*(row-j+1);
                res=res/j;
                temp.push_back(res);
                
            }
            a.push_back(temp);
        }
        return a;
        
        
    }
};