class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> subboxes(9);

        for(int i = 0; i<9; i++){
            for (int j = 0; j<9; j++){
                char d = board[i][j];
                if (d == '.'){
                    continue;
                }
                if (rows[i].count(d) || cols[j].count(d) || subboxes[(i / 3) * 3 + (j / 3)].count(d)) {
                    return false;
                }
                rows[i].insert(d);
                cols[j].insert(d);
                subboxes[(i / 3) * 3 + (j / 3)].insert(d);
            
            }
        }
        return true;
    }
};