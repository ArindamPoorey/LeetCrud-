class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = *max_element(nums.begin(), nums.end());
        int i = 0;
        int count=0;
        for (i = 0; i < nums.size(); i++) {
            if (nums[i] < max) {
                count+= max-nums[i];
            }
        }
        return count;
    }
};