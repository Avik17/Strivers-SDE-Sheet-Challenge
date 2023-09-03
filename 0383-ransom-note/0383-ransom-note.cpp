class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> store1;
        map<char,int> store2;
        for(int i=0;i<magazine.size();i++)
            store1[magazine[i]]++;
             for(int i=0;i<ransomNote.size();i++)
            store2[ransomNote[i]]++;
          for (auto i :store2) {
              if(store1[i.first]<i.second)
              return false;
          }
          return true;
    }
};