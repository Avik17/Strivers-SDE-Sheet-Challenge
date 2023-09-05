class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int prevalt=0;
        int ans=0;
        int alt;
        for(auto num:gain)
        {
             alt=num+prevalt;
            ans=max(alt,ans);
            prevalt=alt;

        }
        return ans;
    }
};