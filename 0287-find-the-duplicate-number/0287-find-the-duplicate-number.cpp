class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size()-1;
        
        map<int,bool> present;
        for(int i=0;i<nums.size();i++)
        {
            if(!present[nums[i]])
            present[nums[i]]=true;
            else return nums[i];
        }
        
      return -1;
    }
};