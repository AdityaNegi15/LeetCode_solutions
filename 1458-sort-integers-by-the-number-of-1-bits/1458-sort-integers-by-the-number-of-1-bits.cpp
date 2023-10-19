class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            int countA = __builtin_popcount(a); // Count set bits in a
            int countB = __builtin_popcount(b); // Count set bits in b

            if (countA == countB) {
                return a < b; // If set bit counts are the same, sort in ascending order
            }

            return countA < countB; // Sort by the number of set bits
        });

        return arr;
    }
};