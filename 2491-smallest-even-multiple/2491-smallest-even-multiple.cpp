class Solution {
public:
    int smallestEvenMultiple(int n) {
        int result = 2;

        while (result % n != 0) {
            result += 2;
        }

        return result;
    }
};