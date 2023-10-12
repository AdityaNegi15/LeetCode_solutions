class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int len1 = s1.length();
        int len2 = s2.length();
        int len3 = s3.length();

        // Check if the lengths of s1 and s2 add up to the length of s3.
        if (len1 + len2 != len3) {
            return false;
        }

        vector<vector<bool>> dp(len1 + 1, vector<bool>(len2 + 1, false));

        // Initialize the dp array.
        dp[0][0] = true;

        // Initialize the first row.
        for (int j = 1; j <= len2; j++) {
            dp[0][j] = dp[0][j - 1] && (s2[j - 1] == s3[j - 1]);
        }

        // Initialize the first column.
        for (int i = 1; i <= len1; i++) {
            dp[i][0] = dp[i - 1][0] && (s1[i - 1] == s3[i - 1]);
        }

        // Fill in the dp array.
        for (int i = 1; i <= len1; i++) {
            for (int j = 1; j <= len2; j++) {
                dp[i][j] = (dp[i - 1][j] && s1[i - 1] == s3[i + j - 1]) ||
                            (dp[i][j - 1] && s2[j - 1] == s3[i + j - 1]);
            }
        }

        return dp[len1][len2];
    }

};