class Solution {
public:
     void sortColors(vector<int>& nums) {
       // Dutch National Flag algorithm
       int low = 0, mid = 0, high = nums.size() - 1;


       // Traverse the array until mid pointer crosses high
       while (mid <= high) {
           if (nums[mid] == 0) {
               // Swap 0 to the front
               swap(nums[low], nums[mid]);
               low++;
               mid++;
           } else if (nums[mid] == 1) {
               // Leave 1 in the middle
               mid++;
           } else {
               // Swap 2 to the end
               swap(nums[mid], nums[high]);
               high--;
           }
       }
   }
};