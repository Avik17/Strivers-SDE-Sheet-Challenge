class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int cnt=0;
      int i=0;
      int n=nums.size();
      
      while(i<nums.size())
      {
          if(nums[i++]==val)
          cnt++;
      }  
      int ans=n-cnt;
      int j=0;
      i=0;

         while(i<n)
      {
          if(nums[i]!=val)
            {
              nums[j]=nums[i];
              j++;
          }
          i++;
      } 
return ans;
    }
};