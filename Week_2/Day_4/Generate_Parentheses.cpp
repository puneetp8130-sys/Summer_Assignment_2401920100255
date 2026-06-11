class Solution {
    public:
    void correctparen(int o ,int c,string curr,vector<string>& ans){
        if(o == 0 && c == 0){
            ans.push_back(curr);
            return;
        }
       if(o > 0){
        correctparen(o-1,c,curr+"(",ans);
       }
       if(c > o){
        correctparen(o,c-1,curr+")",ans);
       }
    }
public:
    vector<string> generateParenthesis(int n) {
        int o = n;
        int c = n;
      vector<string> ans; 
      correctparen(o,c,"",ans);
      return ans; 
    }
};