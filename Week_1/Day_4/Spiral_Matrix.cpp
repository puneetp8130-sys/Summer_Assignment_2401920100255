class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& vec) {
        if(vec.empty()){
        return {};
    }
    const int m = vec.size();
    const int n = vec[0].size();

    vector<int>ans;
    int r1 = 0;
    int c1 = 0;
    int r2 = m-1;
    int c2 = n-1;
   
    while(ans.size() < m * n){
    for(int j=c1;j<=c2 && ans.size() < m * n;++j){
        ans.push_back(vec[r1][j]);
    }for(int i=r1+1;i<=r2 -1 && ans.size() < m * n;++i){
        ans.push_back(vec[i][c2]);
    }for(int j=c2;j>=c1 && ans.size() < m * n;--j){
        ans.push_back(vec[r2][j]);
    }    for(int i=r2-1;i>=r1+1 && ans.size() < m * n;--i){
        ans.push_back(vec[i][c1]);
    }
    r1++;
    c1++;
    r2--;
    c2--;
    }
    return ans; 
    }
};