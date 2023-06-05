class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX;
        int n=prices.size();
        
        int maxProf=0;
        for(int i=0;i<n;i++){
            if(prices[i]<buy )
            {
                buy=prices[i];
              
            }
           maxProf= max((prices[i]-buy),maxProf);
        }
       
        return maxProf;
        
    }
};