class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> countMap;

        for (int num : nums) {
            countMap[num]++;
        }

        int sum = 0;

        for (int num : nums) {
            if (countMap[num] == 1) {
                sum += num;
            }
        }

        return sum;
    }
};