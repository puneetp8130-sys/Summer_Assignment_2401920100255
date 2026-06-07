class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        vector<int> hashval(26, 0);

        for(int i = 0; i < s.length(); i++){
            hashval[s[i] - 'a']++;
            hashval[t[i] - 'a']--;
        }

        for(int x : hashval){
            if(x != 0) return false;
        }

        return true;
    }
};