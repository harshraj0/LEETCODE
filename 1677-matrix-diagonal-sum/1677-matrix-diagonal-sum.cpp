class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i,s=0,j;
        for(i=0;i<mat.size();i++)
        {
            for(j=i;j<mat.size();j++)
            {
                if(i==j)
                s+=mat[i][j];
                break;
            }
        }
        for(i=0;i<mat.size();i++)
        {
            for(j=mat.size()-1-i;j>=0;j--)
            {
                if(i==j)
                continue;
                else if(i+j==mat.size()-1)
                s+=mat[i][j];
            }
        } 
        return s;      
    }
};