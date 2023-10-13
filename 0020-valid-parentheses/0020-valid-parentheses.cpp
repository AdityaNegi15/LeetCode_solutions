class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        if (n % 2 != 0){
            return 0;
        }
        int top = -1;
        vector<char> stack(n);
        for (int i = 0; i<n; i++){
            char c = s[i];
            if (c == '(' || c == '{' || c == '['){
                stack [++top] = c;
            }else{
                if (top == -1){
                    return 0;
                }
                if ((c == ')' && stack[top] != '(') || (c == '}' && stack[top] != '{') || (c == ']' && stack[top] != '[')) {
                    return false;
                }
                top--;
            }
        }
        return top == -1;
    }
};