class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int largest1 = nums[n - 1];
        int largest2 = nums[n - 2];
        int smallest1 = nums[0];
        int smallest2 = nums[1];
        
        int productDifference = (largest1 * largest2) - (smallest1 * smallest2);
        
        return productDifference;
    }
};