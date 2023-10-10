class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n = rating.size();
        int count = 0;

        for (int j = 0; j < n; ++j) {
            int left_smaller = 0, left_larger = 0, right_smaller = 0, right_larger = 0;

            for (int i = 0; i < j; ++i) {
                if (rating[i] < rating[j]) {
                    left_smaller++;
                } else if (rating[i] > rating[j]) {
                    left_larger++;
                }
            }

            for (int k = j + 1; k < n; ++k) {
                if (rating[k] < rating[j]) {
                    right_smaller++;
                } else if (rating[k] > rating[j]) {
                    right_larger++;
                }
            }

            count += (left_smaller * right_larger) + (left_larger * right_smaller);
        }
        return count;
    }
};