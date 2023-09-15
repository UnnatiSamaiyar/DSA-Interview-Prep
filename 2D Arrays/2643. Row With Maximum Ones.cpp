class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>ans{-1,-1};
        for(int i=0; i<mat.size(); i++){
            int res = count(mat[i].begin(),mat[i].end(),1);
            if(res>ans[1]){
                ans = {i,res};
            }
        }
        return ans;
    }
};
