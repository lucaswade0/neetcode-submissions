class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //BRUTE FORCE
        for(int i = 0; i < nums.size(); i++) {
           // int complement = target - nums[i];
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    if(i < j) {
                        return {i, j};
                    }
                    else {
                        return {j, i};
                    }
                    
                }
            }
        }
        return {};
    }
};
