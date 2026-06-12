class Solution {
public:
    int expand(string &s, int left, int right) {
    while(left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }

    return right - left - 1;
}
    string longestPalindrome(string s) {
        int strtIdx = 0;
        int maxlen = 0;
        for(int i = 0 ; i < s.length(); i++){
            int len1 = expand(s,i,i);
            int len2 = expand(s,i,i+1);
            int len = max(len1,len2);
            if(len > maxlen){
                maxlen = len;
                strtIdx = i - (maxlen - 1) / 2;;
            }
        }
        return s.substr(strtIdx,maxlen);   
    }
};