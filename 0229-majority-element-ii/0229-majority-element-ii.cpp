class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
           map<int,int> cnt;
           vector<int> ans;
           map<int,bool>pushed;
        int n=nums.size();
        
        for(int i =0 ; i<n;i++){
            cnt[nums[i]]++;
            if(cnt[nums[i]]>n/3 && !pushed[nums[i]]){
            ans.push_back(nums[i]);
            pushed[nums[i]]=true;
            }
        }
      return ans;
        
    }
};