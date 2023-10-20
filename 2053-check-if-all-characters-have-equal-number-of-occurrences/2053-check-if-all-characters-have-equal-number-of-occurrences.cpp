class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        int expected = freq[s[0]];

        for (const auto& entry : freq) {
            if (entry.second != expected) {
                return false;
            }
        }

        return true;
    }
};