class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int i =0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]<k)
            i++;
            else if(nums[i]+nums[j]>k)
            j--;
            else{
                ans++;
                i++;
                j--;
            }
        }
        return ans;
    }
};