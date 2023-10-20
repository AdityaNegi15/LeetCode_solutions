class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int n = s.length();
        string result = s;
        int left = 0, right = n - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                result[left] = result[right] = min(s[left], s[right]);
            }
            left++;
            right--;
        }

        return result;
    }
};