class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
           map<int,int> cnt;
           vector<int> ans;

        int n=nums.size();
        
        for(int i =0 ; i<n;i++){
            cnt[nums[i]]++;
        }
        for(auto num : cnt){
            if( num.second > n/3)
                ans.push_back(num.first);
            }
      return ans;
        
    }
};