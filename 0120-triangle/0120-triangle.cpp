class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int n = t.size();
        for (int row = n - 2; row >= 0; row--) {
            for (int col = 0; col < t[row].size(); col++) {
                t[row][col] += min(t[row + 1][col], t[row + 1][col + 1]);
            }
        }
        return t[0][0];
    }
};