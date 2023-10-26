class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int result = 0;
        int n = nums.size();

        // Iterate through all possible subsets
        for (int mask = 0; mask < (1 << n); mask++) {
            int subsetXOR = 0;
            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {
                    subsetXOR ^= nums[i];
                }
            }
            result += subsetXOR;
        }

        return result;
    }
};