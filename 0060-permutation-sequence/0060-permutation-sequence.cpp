class Solution {
public:
    string getPermutation(int n, int k) {
       int fact=1;
       vector<int> nums;
       string ans="";
       for(int i=1;i<=n;i++)
        {
          if(i!=n) fact*=i;
           nums.push_back(i);
        }
        
        k=k-1;

        while(true){
            ans=ans+to_string(nums[k/fact]);
            nums.erase(nums.begin()+k/fact);
            if(nums.size()==0)
            break;
            k=k%fact;
            fact=fact/nums.size();
        }
        return ans;
    }
};