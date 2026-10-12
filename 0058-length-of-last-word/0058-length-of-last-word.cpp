class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        // Skip trailing spaces
        while (i >= 0 && s[i] == ' ') {
            --i;
        }
        const int lastIndex = i;
        // Count characters of the last word
        while (i >= 0 && s[i] != ' ') {
            --i;
        }
        return lastIndex - i;;
    }
};
