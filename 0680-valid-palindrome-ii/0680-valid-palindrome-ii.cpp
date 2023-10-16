class Solution {
public:

    bool isPalindrome(const string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int n = s.length();
        int st = 0;
        int e = n-1;

        while(st<e){
            if (s[st] != s[e]) {
                return isPalindrome(s, st + 1, e) || isPalindrome(s, st, e - 1);
            }
            st++;
            e--;
        }
        return 1;
    }
};