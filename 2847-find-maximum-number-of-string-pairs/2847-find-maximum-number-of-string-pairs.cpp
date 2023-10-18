class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int maxPairs = 0;
        vector<bool> paired(words.size(), false);

        for (size_t i = 0; i < words.size(); i++) {
            if (paired[i]) continue;

            string reversedWord = words[i];
            reverse(reversedWord.begin(), reversedWord.end());

            for (size_t j = i + 1; j < words.size(); j++) {
                if (!paired[j] && words[j] == reversedWord) {
                    maxPairs++;
                    paired[i] = true;
                    paired[j] = true;
                    break;
                }
            }
        }
        return maxPairs;
    }
};