class Solution {
public:
    bool isAnagram(string s, string t) {
        if (t.size() > s.size())
            return false;
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());
        return s == t;
    }
};