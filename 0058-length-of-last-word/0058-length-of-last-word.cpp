class Solution {
public:
    int lengthOfLastWord(string s) {
      int n=s.size();
      int i=n-1;
      int size=0;
      while(i>=0) {
        
          if(s[i]==' ' && !size)
          {             
                 i--;
                 continue;
          }
         else if(s[i]==' ' && size){
             return size;
         }
        
          else size++;
          i--;
          
      } 
      return size;
    }
};