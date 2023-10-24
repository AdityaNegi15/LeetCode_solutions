class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();

        // Create a vector of pairs to store names and heights together
        std::vector<std::pair<int, std::string>> nameHeightPairs;
        for (int i = 0; i < n; i++) {
            nameHeightPairs.push_back(std::make_pair(heights[i], names[i]));
        }

        // Sort the vector of pairs based on heights in descending order
        std::sort(nameHeightPairs.rbegin(), nameHeightPairs.rend());

        // Extract the sorted names from the sorted pairs
        std::vector<std::string> sortedNames;
        for (const auto& pair : nameHeightPairs) {
            sortedNames.push_back(pair.second);
        }

        return sortedNames;
    }
};