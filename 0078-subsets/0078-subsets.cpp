class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
         vector<vector<int>> ans;
         int n=nums.size();
         vector<int> res;
        solve(nums,ans,0,res);
        return ans;
        
    }
     void solve(vector<int >&nums, vector<vector<int>> &ans,int ind,vector<int> &res){
       
         int N=nums.size();
         if(ind>=N){
         ans.push_back(res);
         return;
         }
         res.push_back(nums[ind]);
         solve(nums,ans,ind+1,res);
         res.pop_back();
         solve(nums,ans,ind+1,res);
         
        

     }

};