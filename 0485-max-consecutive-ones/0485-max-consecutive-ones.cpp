class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        bool filling=false;
        int ans=0;
        int max1=0;
        for(int i=0;i<nums.size();i++)
        {   if(nums[i]==1 && filling){
            max1++;
        }
          else  if(nums[i]==1){
                max1=1;
                filling=true;
            }
            if(nums[i]==0){
                filling=false;
            }
            ans=max(ans,max1);
            
        }
        return ans;
    }
};