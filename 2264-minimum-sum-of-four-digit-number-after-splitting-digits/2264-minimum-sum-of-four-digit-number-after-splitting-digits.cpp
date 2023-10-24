class Solution {
public:
    int minimumSum(int num) {
        vector<int> digits;
        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        // Sort the digits in non-decreasing order
        std::sort(digits.begin(), digits.end());

        // Create two new numbers by splitting the sorted digits
        int new1 = 0, new2 = 0;
        for (int i = 0; i < digits.size(); i++) {
            if (i % 2 == 0) {
                new1 = new1 * 10 + digits[i];
            } else {
                new2 = new2 * 10 + digits[i];
            }
        }

        // Return the sum of the two new numbers
        return new1 + new2;
    }

};