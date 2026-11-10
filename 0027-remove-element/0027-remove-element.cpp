class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0;
        int right = nums.size() - 1;
        int count = 0;

        while (left <= right) {
            if (nums[left] == val) {
                swap(nums[left], nums[right]);
                right--;
                count++;
            } 
            else {
                left++;
            }
        }

        int k = nums.size() - count;
        return k;
    }
};