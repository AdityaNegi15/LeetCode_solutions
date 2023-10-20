class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> alphabet(26, 0);
        
        for (char c : sentence) {
            alphabet[c - 'a'] = 1;
        }
        
        for (int count : alphabet) {
            if (count == 0) {
                return false;
            }
        }
        
        return true;
    }
};