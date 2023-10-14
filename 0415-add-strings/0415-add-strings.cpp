class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.length();
        int m = num2.length();
        int carry = 0; 
        string result = "";

        for (int i = n - 1, j = m - 1; i >= 0 || j >= 0 || carry > 0; i--, j--) {
            int x = (i >= 0) ? num1[i] - '0' : 0; 
            int y = (j >= 0) ? num2[j] - '0' : 0; 
            int sum = x + y + carry;
            carry = sum / 10; 
            result = to_string(sum % 10) + result;
        }

        return result;
    }
};