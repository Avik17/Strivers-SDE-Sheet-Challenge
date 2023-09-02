class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=0;
        int i=0;
        int j=0;
         int val=nums[j];
        int n=nums.size();
        while(i<n){
           if(nums[i]!=val){
               val=nums[i];
               cnt=1;
               nums[j]=val;
                 j++;
           }
          else  if(nums[i]==val && cnt<2){
                cnt++;
              nums[j]=val;
               j++;
            }
             else  if(nums[i]==val && cnt>2){
                cnt++;
                i++;
                continue;
            }
            i++;
           
        }
        return j;
    }
};