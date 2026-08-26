class Solution {
public:
    int maxArea(vector<int>& height) {
        //Understanding
        // The subtraction of the indexes of the numbers are the width 
        // The minimum of the 2 slected indexs value is the height
        // The are of rect is w*h
        /*So in case 1

            8 is on 1st index and 7 is on 8th index
            so width will be 8-1=7
            and height is the smallest of both numbers so min 8,7 is 7
            are w*h = 7*7=49 so it return 49
         */
         //Brute force
         /*int res = 0;
         for(int i=0;i<height.size();i++)
         {
            for(int j=i+1;j<height.size();j++)
            {
                int wat= min(height[i],height[j])*(j-i);
                res=max(wat,res);
                
            }
         }
         return res;*/
         //Optimized
         int right=height.size()-1;
         int left=0;
         int res=0;
         while(left<right)
         {
            int wat=min(height[right],height[left])*(right-left);
            res=max(res,wat);
            if(height[left] < height[right])
                 left += 1;
            else
                right -= 1;
            
         }
        return res;
    }
};