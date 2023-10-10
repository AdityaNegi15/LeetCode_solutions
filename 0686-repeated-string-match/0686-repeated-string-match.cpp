class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int n = a.length();
        int m = b.length();
        string s = "";

        int repeat = 1; 

        while (s.length() < m) {
            s += a;
            repeat++;
        }

        if (s.find(b) != string::npos) {
            return (repeat-1);
        }

        s += a;
        repeat++;

        if (s.find(b) != string::npos) {
            return (repeat-1);
        }

        return -1; 
    }

};