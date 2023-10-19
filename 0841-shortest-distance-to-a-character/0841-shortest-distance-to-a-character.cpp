class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.length();
        std::vector<int> result(n, n);

        int closestLeft = -n;
        for (int i = 0; i < n; i++) {
            if (s[i] == c) {
                closestLeft = i;
            }
            result[i] = std::min(result[i], i - closestLeft);
        }

        int closestRight = 2 * n;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == c) {
                closestRight = i;
            }
            result[i] = std::min(result[i], closestRight - i);
        }

        return result;
    }
};