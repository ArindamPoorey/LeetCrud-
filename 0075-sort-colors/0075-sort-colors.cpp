class Solution {
public:
    void sortColors(vector<int>& nums) {
    int start = 0;
    int mid = 0;
    int end = nums.size() - 1;

    while (mid <= end) {

      switch (nums[mid]) {
        case 0:
          // Swap with start index
          swap(nums[start], nums[mid]);
          mid++;
          start++;
          break;

        case 1:
          mid++;
          break;

        case 2:
          // Swap with end index
          swap(nums[mid], nums[end]);
          end--;
          break;
      }
    }
    }
};