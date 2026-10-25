
class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        int left = 0, right = 0;

        while (left < s.size()) {
            if (s[left] != t[right]) {
                return t[right];
            } else {
                left++;
                right++;
            }
        }

        return t[right];
    }
};
