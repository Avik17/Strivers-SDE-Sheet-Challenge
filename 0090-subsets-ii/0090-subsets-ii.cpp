class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
      vector<int>ds;
       vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        
        solve(nums,ans,0,ds);
      
        return ans;
        
    }
   void solve(vector<int>&nums,vector<vector<int>> &ans,int ind,vector<int> &ds){
                
            ans.push_back(ds);
        for(int i=ind;i<nums.size();i++){
        if(i!=ind && nums[i]==nums[i-1])
        continue;
           
            ds.push_back(nums[i]);
            solve(nums,ans,i+1,ds);
            ds.pop_back();
        }

    
     }
};