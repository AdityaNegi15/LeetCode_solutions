class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return -1;
        }

        int m = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (nums[i] > m && nums[i] % 2 == 0) {
                m = nums[i];
            }
        }

        if (m == INT_MIN) {
            return -1; 
        }

        vector<int> count(m + 1, 0); 

        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                count[nums[i]]++;
            }
        }

        int maxCount = 0;
        int result = -1;

        for (int i = 0; i <= m; i++) {
            if (count[i] > maxCount) {
                maxCount = count[i];
                result = i;
            }
        }

        return result;
    }

};