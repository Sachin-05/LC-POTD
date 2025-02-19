class Solution {
public:

void backtrack(int n, string current, vector<string>& result) {
    // Base Case: If the string reaches length n, add it to result
    if (current.length() == n) {
        result.push_back(current);
        return;
    }

    // Explore 'a', 'b', 'c'
    for (char ch : {'a', 'b', 'c'}) {
        // Skip if the character is the same as the previous one
        if (!current.empty() && current.back() == ch) continue;

        // Recurse with chosen character
        backtrack(n, current + ch, result);
    }
}
    string getHappyString(int n, int k) {
        // so we are going to make the most of the happy strings
        // we need to do the backtracking as well here
        vector <string> result;
        backtrack(n, "", result);
        return (k<=result.size()) ? result[k-1] : "";
    }
};
