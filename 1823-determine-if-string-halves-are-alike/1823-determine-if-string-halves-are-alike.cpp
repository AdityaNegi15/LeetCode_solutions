class Solution {
public:
    bool halvesAreAlike(string s) {
        string a = s.substr(0,(s.size()/2));
        string b = s.substr((s.size()/2), (s.size()/2));

        int va = 0;
        int vb = 0;

        for (int i = 0; i<a.size(); i++){
            if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U'){
                va++;
            }
        }
        for (int i = 0; i<b.size(); i++){
            if(b[i] == 'a' || b[i] == 'e' || b[i] == 'i' || b[i] == 'o' || b[i] == 'u' || b[i] == 'A' || b[i] == 'E' || b[i] == 'I' || b[i] == 'O' || b[i] == 'U'){
                vb++;
            }
        }

        if (va == vb){
            return true;
        }
        return false;
    }
};