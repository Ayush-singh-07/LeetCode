class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        int to_replace = -1;   // value
        int replace_from = -1; // index
        int mini = INT_MAX;

        for (int j = 0; j < k + 1; j++) {
            if (to_replace != -1 && replace_from != -1) {
                to_replace *= multiplier;
                nums[replace_from] = to_replace;
                to_replace = replace_from = -1;
                mini = INT_MAX;
            }
            for (int i = 0; i < nums.size(); i++) {
                if (mini > nums[i]) {
                    mini = to_replace = nums[i];
                    replace_from = i;
                }
            }
        }

        return nums;
    }
};