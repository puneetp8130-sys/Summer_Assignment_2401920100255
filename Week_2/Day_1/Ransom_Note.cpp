class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    vector<int>hashmpp(26,0);

    for(int i = 0; i < magazine.length(); i++){
        hashmpp[magazine[i]-'a']++;
    } 

    for(int i = 0; i < ransomNote.length(); i++){
        if(--hashmpp[ransomNote[i]-'a'] < 0){
            return false;
        }
    }
    return true;   
    }
};