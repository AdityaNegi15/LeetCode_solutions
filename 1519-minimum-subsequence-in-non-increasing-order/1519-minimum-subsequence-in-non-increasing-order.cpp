class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());

        int totalSum = std::accumulate(nums.begin(), nums.end(), 0);
        int currentSum = 0;
        std::vector<int> result;

        for (int num : nums) {
            result.push_back(num);
            currentSum += num;
            if (currentSum > totalSum - currentSum) {
                break;
            }
        }

        return result;
    }
};