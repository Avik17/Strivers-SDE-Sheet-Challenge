

class Solution {
public:
    string reverseWords(string s) {
        int len = s.length();
        int i = len - 1;
        string res = "";
        string temp = "";
        bool pushed = false;
        while (i >= 0) {
            char ch = s.at(i);
            if (ch != ' ') {
                temp += ch;
                pushed = false;
            }
            if ((!pushed && ch == ' ') ||!pushed && (ch == ' ' || i == 0)) {
                reverse(temp.begin(), temp.end());
                if (!temp.empty()) {
                    if (!res.empty()) {
                        res += ' ';
                    }
                    res += temp;
                }
                
                temp = "";
                pushed = true;
            }
            i--;
        }
        return res;
    }
};
