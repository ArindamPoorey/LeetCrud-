class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        /*
        we can use the two pointer so find out the same values.
        if we find a duplicate we will store i and then we use a delte
        in array till another unique number is found.
        if its a duplicate then we skip it.
        we go on till the nums.size().
        */
        int p1=0;
        int p2=0;
        for(p2=0;p2<nums.size();p2++)
        {
            if (nums[p2]!=nums[p1])
            {
                p1++;
                nums[p1]=nums[p2];
            }

        }
        return p1+1;
    }
};