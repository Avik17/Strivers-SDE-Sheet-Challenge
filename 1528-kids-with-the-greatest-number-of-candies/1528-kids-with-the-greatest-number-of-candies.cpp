class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=candies[0];
        for(auto num:candies)
        if(num>max)
        max=num;
        int n=candies.size();
      vector<bool> arr;
      int i=0;
         for(auto num:candies){
        if(num + extraCandies>=max)
        arr.push_back(true);
        else  arr.push_back(false);}
        return arr;
    }
};