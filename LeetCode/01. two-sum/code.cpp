class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int point = 0;
        int result = 0;
        vector<int> last_result;
        for (int i = 0; i < nums.size(); i++){
            point = nums[i];
            result = target - point;
            for (int j = i + 1; j < nums.size(); j++){
                if (nums[j] == result) {
                    last_result.push_back(i);
                    last_result.push_back(j);
                }
            }
        }
        return last_result;
    }
};
