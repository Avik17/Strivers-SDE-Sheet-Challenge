class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> cnt;
        int n=nums.size();
        for(int i =0 ; i<n;i++){
            cnt[nums[i]]++;
            if(cnt[nums[i]]>n/2)
            return nums[i];
        }
      return -1;  
    }
};