class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        map <int,int> present;
        for(auto num :nums){
            present[num]++;
        }
     for(auto &it : present){
         if(it.second==1)
         return it.first;
     }
     return -1;
    }
};