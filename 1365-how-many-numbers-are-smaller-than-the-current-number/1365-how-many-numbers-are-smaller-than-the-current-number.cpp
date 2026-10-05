class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // Sort a copy in descending order, then for each original element
        // binary search its last occurrence. Count elements after it and
        // store that count in the result to preserve the original order.

        
        // Copy nums into a descending sorted array
        vector<int> result;
        vector<int> dessort = nums;
        sort(dessort.begin(), dessort.end(), greater<int>());
        // Find the last occurrence of every number
        for (int i = 0; i < nums.size(); i++) {
            int s = nums[i];
            int low = 0;
            int high = dessort.size() - 1;
            int finalIndex = -1;
            //binary search
            while (low <= high) {
                
                int mid = low + (high - low) / 2;

                if (dessort[mid] == s) {
                    // Found it, but continue searching right
                    finalIndex = mid;
                    low = mid + 1;
                }
                else if (dessort[mid] > s) {
                    // In descending array, smaller values are on the right
                    low = mid + 1;
                }
                else {
                    // dessort[mid] < s
                    // Larger values are on the left
                    high = mid - 1;
                }
            }
            // Number of elements after the last occurrence
            int count = dessort.size() - finalIndex - 1;
            result.push_back(count);
        }

        return result;
    }
};