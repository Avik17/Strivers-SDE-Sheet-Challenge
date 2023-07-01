class Solution {
public:
    int reverse(int x) {
        string num=to_string(x);
        int j=num.length()-1;
        int i=0;
       long ans=x;
       
        if(ans<0)
        ans=-ans;
        while(i<j){
            swap(num[i++],num[j--]);
        }
  
        ans=stol(num);
        if(ans<INT_MIN || ans>INT_MAX)
        return 0;
      if(x<0)
      ans=-ans;
      return ans;
    }
};