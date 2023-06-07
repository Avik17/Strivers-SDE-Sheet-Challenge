class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int n=nums.size();
      int ind = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }
    if (ind == -1) {
        // reverse the whole array:
        reverse(nums.begin(), nums.end());
        return ;
    }
       
      for(int i = n - 1; i > ind; i--){
          if(nums[i]>nums[ind] ){
 swap(nums[ind],nums[i]);
          break;
          
          }
      }
       reverse(nums.begin()+ ind + 1, nums.end());
       return;
    }
};