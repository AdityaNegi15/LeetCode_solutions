class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int r = 0;
        for (string sentence : sentences){
            int c = 0;
            for (int i = 0; i<sentence.size(); i++){
                if (sentence[i] == ' '){
                    c++;
                }
            }
            if (c>r){
                r = c;
            }
        }
        return (r+1);
    }
};