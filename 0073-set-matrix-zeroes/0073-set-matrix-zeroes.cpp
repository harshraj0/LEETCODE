class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int a,b;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                for(a=0;a<m;a++)
                {
                    if(matrix[a][j]!=0)
                    matrix[a][j]=-29879378;

                }
                for(b=0;b<n;b++)
                {
                    if(matrix[i][b]!=0)
                    matrix[i][b]=-29879378;

                }
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==-29879378)
                matrix[i][j]=0;
            }
        }
        
        
        
    }
};