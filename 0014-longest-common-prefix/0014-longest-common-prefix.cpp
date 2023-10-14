class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string r = "";
        if (strs.empty()){
            return r;
        }
        r = strs[0];

        for (int i = 1; i<strs.size(); i++){
            int  j = 0;
            while(j < r.size() && j < strs[i].size() && r[j] == strs[i][j]){
                j++;
            }
            r = r.substr(0,j);
        }
        return r;
    }
};