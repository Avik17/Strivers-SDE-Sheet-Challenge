class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
      vector<int>ds;
       vector<vector<int>>ans;
       int n=nums.size();
       int freq[n];
      for(int i =0;i<nums.size();i++){
          freq[i]=0;
      }
        solve(nums,ans,ds,freq);
      
        return ans;   
    }

    void solve(vector<int>&nums,vector<vector<int>> &ans,vector<int> &ds,int freq[]){
                
            if(ds.size()==nums.size()){
           ans.push_back(ds);
           return;
            }
        for(int i=0;i<nums.size();i++)
        {  
            if(!freq[i])
        {
            ds.push_back(nums[i]);
            freq[i]=1;
            solve(nums,ans,ds,freq);
            ds.pop_back();
              freq[i]=0;
        }
        }
     }
};