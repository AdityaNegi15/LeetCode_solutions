class Solution {
public:
    int Count(int n){
        int c = 0;
        while(n >0){
            if(n&1){
                c++;
            }
            n>>=1;
        }
        return c;
    }

    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [this](int a, int b) {
            int countA = Count(a);
            int countB = Count(b);

            if (countA == countB) {
                return a < b;
            }

            return countA < countB;
        });
        return arr;
    }
};