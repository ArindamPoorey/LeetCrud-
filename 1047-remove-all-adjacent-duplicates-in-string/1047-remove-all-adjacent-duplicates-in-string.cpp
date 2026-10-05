class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> s2;

        for(int i = 0; i < s.length(); i++) {
            
            if(!s2.empty() && s2.top() == s[i]) {
                s2.pop();
            }
            else {
                s2.push(s[i]);
            }
        }

        std::string result(s2.size(), ' '); 
        int index = s2.size() - 1;

        while(!s2.empty()) {
            result[index--] = s2.top();
            s2.pop();
        }

        return result;
    }
};