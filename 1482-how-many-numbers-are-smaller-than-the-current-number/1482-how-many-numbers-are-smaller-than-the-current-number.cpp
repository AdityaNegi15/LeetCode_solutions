class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        unordered_map<int, int> rank;

        for (int i = 0; i < sortedNums.size(); i++) {
            if (i == 0 || sortedNums[i] != sortedNums[i - 1]) {
                rank[sortedNums[i]] = i;
            }
        }

        vector<int> result;

        for (int num : nums) {
            result.push_back(rank[num]);
        }

        return result;
    }
};