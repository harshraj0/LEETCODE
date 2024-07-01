class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> a(n, 0); // Tracks columns to be zeroed
        vector<int> b(m, 0); // Tracks rows to be zeroed

        // First pass: mark the rows and columns that are to be zeroed
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    b[i] = 1; // Mark this row to be zeroed
                    a[j] = 1; // Mark this column to be zeroed
                }
            }
        }

        // Second pass: zero out the marked rows
        for (int i = 0; i < m; i++) {
            if (b[i] == 1) {
                for (int j = 0; j < n; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Third pass: zero out the marked columns
        for (int j = 0; j < n; j++) {
            if (a[j] == 1) {
                for (int i = 0; i < m; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
