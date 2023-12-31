class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int target = 0;
        sort(nums.begin(),nums.end());
        set<vector<int>> temp;
        vector<vector<int>>ans;
        for(int i=0; i<n; i++){
            int j = i+1;
            int k = n-1;
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                if(sum == target){
                    temp.insert({nums[i],nums[j], nums[k]});
                    k--;
                    j++;
                }
                else if(sum < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        for(auto t : temp){
            ans.push_back(t);
        }
        return ans;
    }
};
