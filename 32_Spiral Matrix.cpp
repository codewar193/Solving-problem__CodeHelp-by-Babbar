class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int numRows = matrix.size();
        if (numRows == 0)
            return ans;
        int numCols = matrix[0].size();
        if (numCols == 0)
            return ans;

        int rowStart = 0, rowEnd = numRows - 1;
        int colStart = 0, colEnd = numCols - 1;

        while (rowStart <= rowEnd && colStart <= colEnd) {
            // Traverse right
            for (int col = colStart; col <= colEnd; col++) {
                ans.push_back(matrix[rowStart][col]);
            }
            rowStart++;

            // Traverse down
            for (int row = rowStart; row <= rowEnd; row++) {
                ans.push_back(matrix[row][colEnd]);
            }
            colEnd--;

            // Traverse left
            if (rowStart <= rowEnd) {
                for (int col = colEnd; col >= colStart; col--) {
                    ans.push_back(matrix[rowEnd][col]);
                }
                rowEnd--;
            }

            // Traverse up
            if (colStart <= colEnd) {
                for (int row = rowEnd; row >= rowStart; row--) {
                    ans.push_back(matrix[row][colStart]);
                }
                colStart++;
            }
        }

        return ans;
    }
};
