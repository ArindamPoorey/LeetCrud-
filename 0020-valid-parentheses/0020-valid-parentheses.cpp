#include <string>
#include <stack>
class Solution {
public:
    bool isValid(std::string s) {
        if (s.length() % 2 != 0) return false;
        std::stack<char> valid;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                valid.push(c);
            } 
            else {
                if (valid.empty()) return false;
                char check = valid.top();
                if ((c == ')' && check == '(') ||
                    (c == '}' && check == '{') ||
                    (c == ']' && check == '[')) {
                    valid.pop();
                } else {
                    return false;
                }
            }
        }
        return valid.empty();
    }
};