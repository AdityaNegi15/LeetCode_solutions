class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es = 0;
        int ds = 0;

        for (int num : nums){
            es += num;
            if (num > 9){
                while(num > 0){
                    int i = num % 10;
                    ds += i;
                    num /= 10;
                }
            }else{
                ds += num;
            }
        }
        return abs(es-ds);
    }
};