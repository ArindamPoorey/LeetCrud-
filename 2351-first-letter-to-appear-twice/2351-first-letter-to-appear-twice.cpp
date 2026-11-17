class Solution {
public:
    char repeatedCharacter(string s) {
        int left = 0;
        int right = 1;

        while (right < s.size()) {
            if (s[left] == s[right]) {
                return s[right];
            }

            if (left == right - 1) {
                right++;
                left = 0;
            } else {
                left++;
            }
        }

        return '\0';
    }
};