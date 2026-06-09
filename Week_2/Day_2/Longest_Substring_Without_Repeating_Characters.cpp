class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int>hash(256,-1);
    int left = 0, right = 0;
    int len = 0;
    int maxlen = 0;
    int n = s.length();

    while(right < n){
        if(hash[s[right]] != -1){
            if(hash[s[right]] >= left){
                left = hash[s[right]] + 1;
            }
        }
        hash[s[right]] = right;
        len = right - left + 1;
        maxlen = max(len,maxlen);
        right++;
    } 
    return maxlen;   
    }
};