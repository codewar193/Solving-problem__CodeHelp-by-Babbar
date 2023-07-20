class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
      //TC:O(N^2). SP:O(1)
        // Transpose the matrix (swap elements across the diagonal)
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row to complete the rotation
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
