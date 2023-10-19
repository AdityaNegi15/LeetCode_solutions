class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        std::vector<int> rowMin(m, INT_MAX);
        std::vector<int> colMax(n, INT_MIN);

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                rowMin[i] = std::min(rowMin[i], matrix[i][j]);
                colMax[j] = std::max(colMax[j], matrix[i][j]);
            }
        }

        std::vector<int> luckyNumbers;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == rowMin[i] && matrix[i][j] == colMax[j]) {
                    luckyNumbers.push_back(matrix[i][j]);
                }
            }
        }

        return luckyNumbers;
    }
};