class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0){
            return 0;
        }
        long long s = 0;
        int t = x; 
        while( t > 0){
            int i = t % 10;
            s = s*10 + i;
            t /= 10;
        }

        if (s == x){
            return 1;
        }
        return 0;
    }
};