class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int c = 0;
        for (int i = 0; i<nums.size(); i++){
            for (int j = i+1; j<nums.size(); j++){
                int s = 0;
                s = nums[i] +nums[j];
                if (s < target)
                    c++;
            }
        }
        return c;
    }
};