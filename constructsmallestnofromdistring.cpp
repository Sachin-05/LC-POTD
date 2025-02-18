class Solution {
public:
    string smallestNumber(string pattern) {
         string result = "";
    stack<int> stk;
    
    // Iterate through the pattern and push numbers into the stack
    for (int i = 0; i <= pattern.size(); ++i) {
        // Push the current number (1-based index)
        stk.push(i + 1);
        
        // If at end or encounter 'I', pop elements from stack
        if (i == pattern.size() || pattern[i] == 'I') {
            while (!stk.empty()) {
                result += to_string(stk.top());
                stk.pop();
            }
        }
    }
    
    return result;
    }
};
