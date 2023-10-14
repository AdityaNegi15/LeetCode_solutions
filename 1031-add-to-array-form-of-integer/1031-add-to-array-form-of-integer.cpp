class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        vector<int> result;
        int carry = 0;

        for (int i = n - 1; i >= 0 || k > 0; i--) {
            int sum = carry;

            if (i >= 0) {
                sum += num[i];
            }

            if (k > 0) {
                sum += k % 10;
                k /= 10;
            }

            carry = sum / 10;
            result.insert(result.begin(), sum % 10);
        }

        if (carry > 0) {
            result.insert(result.begin(), carry);
        }

        return result;
    }

};