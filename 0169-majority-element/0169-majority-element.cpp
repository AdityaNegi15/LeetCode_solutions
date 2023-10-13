class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for  (int n : nums){
            if (count == 0){
                candidate = n;
                count = 1;
            } else if (n == candidate){
                count ++;
            } else{
                count--;
            }
        }
        return candidate;
    }
};