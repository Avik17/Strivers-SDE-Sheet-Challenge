class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>res;
       solve(candidates,ans,0,res,target);
       return ans; }
    
     void solve(vector<int >&candidates, vector<vector<int>> &ans,int ind,vector<int>&res,int target){
                     
         if( ind==candidates.size()){
         if(target==0)
           ans.push_back(res); 
         return ;
         }
         
         if(candidates[ind]<=target)
         {
         res.push_back(candidates[ind]);
         target-=candidates[ind];
         solve(candidates,ans,ind,res,target);
         res.pop_back();
         target+=candidates[ind];
         }
         solve(candidates,ans,ind+1,res,target);

     }
};