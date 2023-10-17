class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int m = accounts[0].size();
        
        vector<int> r(n,0);

        for (int i = 0;i<n; i++){
            for(int j = 0; j<m; j++){
                r[i] += accounts[i][j];
            }
        }

        int max = INT_MIN;
        for(int i = 0; i<n; i++){
            if (r[i] > max){
                max = r[i];
            }
        }
        return max;
    }
};