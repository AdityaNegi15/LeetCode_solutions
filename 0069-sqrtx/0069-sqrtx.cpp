class Solution {
public:
    int mySqrt(int x) {
        if (x<= 1){
            return x;
        }

        long long left = 1;
        long long right = x;

        while(left<right){
            long long mid = (left + right)/2;
            long long square = mid *mid;

            if (square == x){
                return mid;
            } else if(square < x){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        return left-1;
    }
};