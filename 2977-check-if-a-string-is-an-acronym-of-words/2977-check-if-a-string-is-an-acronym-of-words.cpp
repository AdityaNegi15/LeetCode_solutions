class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        int sIdx = 0;  // Index to traverse the string `s`.

        for (string& word : words) {
            if (sIdx >= s.size()) {
                return false;
            }

            if (word[0] != s[sIdx]) {
                return false;
            }

            sIdx++;
        }

        return sIdx == s.size();
    }
};