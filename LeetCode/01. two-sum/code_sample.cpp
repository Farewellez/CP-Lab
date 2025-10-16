// runtime 0ms (hellnah)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> diff_map;
        for(int i = 0; i < nums.size(); ++i){
            if (diff_map.find(nums[i]) != diff_map.end())
                return {diff_map[nums[i]], i};
            diff_map[target - nums[i]] = i;
        }
        return {};
    }
};
