class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s == "") return true;
        if(t == "") return false;

        int j = 0;

        for(int i = 0; i < t.length() && j < s.length(); i++) {
            if(s[j] == t[i]) {
                j++;
            }
        }

        return j == s.length();
    }
};