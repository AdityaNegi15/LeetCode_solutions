class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        std::sort(seats.begin(), seats.end());
        std::sort(students.begin(), students.end());
        
        int totalMoves = 0;
        for (int i = 0; i < seats.size(); ++i) {
            totalMoves += std::abs(students[i] - seats[i]);
        }
        
        return totalMoves;
    }
};