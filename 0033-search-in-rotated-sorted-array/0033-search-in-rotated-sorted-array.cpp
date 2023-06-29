class Solution {
public:
    int search(vector<int>& nums, int target) {
           int start=0;
        int peak=0;
        int end=nums.size()-1;
     //   int mid=(start+end)/2;
        while (start<=end)
        {       int   mid=start + (end-start)/2;

            if(mid<nums.size()-1 && nums[mid]>nums[mid+1]){
                peak = mid;
               break;
            }
           else if(mid>0 && nums[mid]<nums[mid-1]){
                               peak = (mid-1);
                                        break;
              
            }
        else    if(nums[mid]<nums[start]){
                end=mid-1;
            }
        else{
                start=mid+1;
            }
            /* code */
        }
        if(target==nums[peak]){
            return peak;
        }
     
           start=0;
           end=peak;
          int mid=(start+end)/2;
            while (start <= end)
            {
                if (nums[mid] < target)
                {
                    start = mid + 1;
                    mid = start + (end - start) / 2;
                }
                else if (nums[mid] > target)
                {
                    end = mid - 1;
                    mid = start + (end - start) / 2;
                }
                else

                {
                    return mid;
                }
            }
       
           start = peak + 1;
            end = nums.size() - 1;
            mid = (start + end) / 2;

            while (start <= end)
            {
                if (nums[mid] < target)
                { start = mid + 1;
                    
                    mid = start + (end - start) / 2;
                }
                else if (nums[mid] > target)
                {
                   end = mid - 1;
                    mid = start + (end - start) / 2;
                }
                else
                    return mid;
            }
               
            //    }
            return -1;
        
    }
};