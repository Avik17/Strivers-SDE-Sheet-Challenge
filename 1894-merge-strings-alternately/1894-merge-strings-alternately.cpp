class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        int j=0;
        int n1=word1.size();
        int n2=word2.size();
        string ans;
        bool w1=false,w2=true;
        while(i<n1 && j<n2){
            if(!w1){
                ans.push_back(word1[i++]);
                w1=true;
                w2=false;
            }
           else {
                ans.push_back(word2[j++]);
                w2=true;
                w1=false;
            }
        }
        while(i<n1)
        ans.push_back(word1[i++]);
        while(j<n2)
        ans.push_back(word2[j++]);
        return ans;
    }
};