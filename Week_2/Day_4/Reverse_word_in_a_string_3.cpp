class Solution {
public:
    string reverseWords(string s) {
        int start = 0;
        int n = s.length();

        for(int end = 0; end <= n; end++) {
            if(end == n || s[end] == ' ') {
                int l = start;
                int r = end - 1;

                while(l < r) {
                    swap(s[l], s[r]);
                    l++;
                    r--;
                }

                start = end + 1;
            }
        }

        return s;
    }
};