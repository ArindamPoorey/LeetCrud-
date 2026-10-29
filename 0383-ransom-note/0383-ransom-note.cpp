class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size())
            return false;

        std::sort(ransomNote.begin(), ransomNote.end());
        std::sort(magazine.begin(), magazine.end());

        int r = 0;
        int m = 0;

        while (r < ransomNote.size() && m < magazine.size()) {
            if (ransomNote[r] == magazine[m]) {
                r++;
            }
            m++;
        }

        return r == ransomNote.size();
    }
};
