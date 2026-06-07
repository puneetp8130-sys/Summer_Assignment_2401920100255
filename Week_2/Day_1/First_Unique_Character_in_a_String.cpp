class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>mpp(26,0);

        for(char c : s){
            mpp[c-'a']++;
        }

        for(int i = 0; i < s.length(); i++){
            if(mpp[s[i]-'a'] == 1){
                return i;
            }
        }

        return -1;
    }
};