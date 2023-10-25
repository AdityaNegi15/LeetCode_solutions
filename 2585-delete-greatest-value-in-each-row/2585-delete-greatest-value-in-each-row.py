class Solution:
    def deleteGreatestValue(self, grid: List[List[int]]) -> int:
        answer = 0
        while grid:
            max_val = 0
            for row in grid:
                rowMax = max(row)
                row.remove(rowMax)
                if (rowMax > max_val):
                    max_val = rowMax
            answer += max_val
            
            grid = [row for row in grid if row]
            
        return answer
        