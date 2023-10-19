class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();

        vector<pair<int, int>> soldiersCount;

        for (int i = 0; i < m; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                count += mat[i][j];
            }
            soldiersCount.push_back({count, i});
        }

        sort(soldiersCount.begin(), soldiersCount.end());

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(soldiersCount[i].second);
        }

        return result;
    }
};