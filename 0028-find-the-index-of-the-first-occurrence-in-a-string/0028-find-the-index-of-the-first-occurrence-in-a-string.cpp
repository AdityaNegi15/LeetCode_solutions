class Solution {
public:
    int strStr(string s1, string s2) {
        int m = s1.length();
        int n = s2.length();

        if(n == 0){
            return 0;
        }

        for (int i = 0; i<= m-n; i++){
            int j = 0;
            while(j<n && s1[i+j] == s2[j]){
                ++j;
            }
            if(j==n){
                return i;
            }

        }
        return -1;
    }
};