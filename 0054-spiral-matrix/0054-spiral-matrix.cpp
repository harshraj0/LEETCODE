class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty() || matrix[0].empty()) return result;

        int m = matrix.size();
        int n = matrix[0].size();
        int left = 0, right = n - 1, top = 0, bottom = m - 1;

        while (left <= right && top <= bottom) {
            // Traverse from left to right
            for (int i = left; i <= right; ++i) {
                result.push_back(matrix[top][i]);
            }
            ++top;

            // Traverse from top to bottom
            for (int i = top; i <= bottom; ++i) {
                result.push_back(matrix[i][right]);
            }
            --right;

            // Make sure we are now on a different row
            if (top <= bottom) {
                // Traverse from right to left
                for (int i = right; i >= left; --i) {
                    result.push_back(matrix[bottom][i]);
                }
                --bottom;
            }

            // Make sure we are now on a different column
            if (left <= right) {
                // Traverse from bottom to top
                for (int i = bottom; i >= top; --i) {
                    result.push_back(matrix[i][left]);
                }
                ++left;
            }
        }

        return result;
    }
};
