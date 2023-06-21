class Solution {
public:
    bool isValid(string s) {
        stack <char> brackets;
        int cnt=0;
        while(cnt!=s.size()){
            char ch=s[cnt++];
            if(ch=='(' || ch=='{' || ch=='[' ){
            brackets.push(ch);}
          else  if(!brackets.empty()){
            if(check(brackets.top(),ch))
            {  
                brackets.pop();
            }
            else return false;
            }
            else return false;
           
        }
  if(brackets.empty())
        return true;
     return false;
    }
     bool check(char ch1,char ch2){
        if(ch1=='(' && ch2==')')
        return true;
         if(ch1=='[' && ch2==']')
        return true;
         if(ch1=='{' && ch2=='}')
        return true;
        return false;
    }
};