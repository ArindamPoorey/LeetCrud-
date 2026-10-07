class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        /*
         we can search first in the if block if found then we return i then
         break. in else if we dont dinf in array then we go to else block to
         find the index. in the else block we can implemnt binary search to
         search the element if we dont find it, then we return low+1.
         */
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return mid;

            if (nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }

        return low;
    }
};