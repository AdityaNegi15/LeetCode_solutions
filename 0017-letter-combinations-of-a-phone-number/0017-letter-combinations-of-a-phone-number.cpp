class Solution {
public:

    void genComb(const string& digits, int index, string& current, vector<string>& result, const vector<string>& letters) {
        if (index == digits.size()){
            result.push_back(current);
            return ;
        }
        int digit = digits[index] - '0';
        for (char letter: letters[digit]){
            current.push_back(letter);
            genComb(digits, index + 1, current, result, letters);
            current.pop_back();
        }
    }


    vector<string> letterCombinations(string digits) {
        vector<string> r;
        if (digits.empty()){
            return r;
        }

        vector<string> letters = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        string curr = "";
        genComb(digits, 0, curr, r, letters);
        return r;
    }
};