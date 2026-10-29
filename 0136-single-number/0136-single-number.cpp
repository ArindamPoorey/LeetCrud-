class Solution {
public:
    int singleNumber(vector<int>& nums) {
        /*
        We can first sort the array then,
        we run 2 pointers r=0 l=1
        then we compare two values
        thn we will return the left pointer index value.
        */
        sort(nums.begin(), nums.end());

        int right = 0;
        int left = 1;

        while (left < nums.size()) {
            if (nums[right] == nums[left]) {
                right += 2;
                left += 2;
            } else {
                return nums[right];
            }
        }

        return nums[right];
    }
};
