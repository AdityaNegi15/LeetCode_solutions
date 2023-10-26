class Solution {
public:
    int minBitFlips(int start, int goal) {
        int xorResult = start ^ goal;
        int count = 0;

        while (xorResult > 0) {
            if (xorResult & 1) {
                count++;
            }
            xorResult >>= 1;
        }

        return count;
    }
};