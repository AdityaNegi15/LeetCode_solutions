class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        
        string romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        int romanValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        
        int i = 0;

        while (i < s.length()){
            for(int j = 0; j<13; j++){
                if (s.substr(i, romanSymbols[j].length()) == romanSymbols[j]) {
                    result += romanValues[j];
                    i += romanSymbols[j].length();
                    break;
                }

            }
        }
        
        return result;
    }
};