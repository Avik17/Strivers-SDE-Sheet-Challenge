class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> freq;
        freq[0]=0;
         freq[1]=0;
          freq[2]=0;
        for(int i=0;i<nums.size();i++){
          freq[nums[i]]++;
        }
        int cnt=0;
          for(int i=0;i<freq[0];i++){
          nums[cnt++]=0;
        }
         for(int i=0;i<freq[1];i++){
          nums[cnt++]=1;
        }
          for(int i=0;i<freq[2];i++){
          nums[cnt++]=2;
        }
        
    }
};