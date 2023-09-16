class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int res1 = -1;
        int res2 = -1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]>target){
                end = mid - 1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                res1 = mid;
                end = mid - 1;
            }
        }
        start = 0, end = nums.size()-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(nums[mid]>target){
                end = mid - 1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }
            else{
                res2 = mid;
                start = mid + 1;
            }
        }
        return {res1, res2};
    }
};
