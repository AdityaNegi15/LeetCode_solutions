class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxValue = 0;

        for (const std::string& str : strs) {
            int value = 0;

            bool isNumeric = true;
            for (char c : str) {
                if (!std::isdigit(c)) {
                    isNumeric = false;
                    break;
                }
            }

            if (isNumeric) {
                value = std::stoi(str);
            } else {
                // Otherwise, its value is its length
                value = str.length();
            }

            // Update the maximum value
            maxValue = std::max(maxValue, value);
        }
        return maxValue;
    }
};