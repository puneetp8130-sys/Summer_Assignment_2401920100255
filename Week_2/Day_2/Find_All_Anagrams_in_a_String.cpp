class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    int n = s.length();
    int m = p.length();
    vector<int>ans;

    if(m > n) return {};

    vector<int>freq1(26,0);
    vector<int>freq2(26,0);

    for(int i = 0; i < m; i++){
        freq1[p[i]-'a']++;
        freq2[s[i]-'a']++;
    }

    if(freq1 == freq2){
        ans.push_back(0);
    }

    for(int i = m; i < n; i++){
        freq2[s[i]-'a']++;
        freq2[s[i-m]-'a']--;

        if(freq1 == freq2){
            ans.push_back(i-m+1);
        }
    }
    return ans;   
    }
};