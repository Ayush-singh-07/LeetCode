class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector <int>sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        vector <int> ans;
        unordered_map<int, int> mp;

        for(int i=0; i<sorted_nums.size(); i++){
            if(!(mp.find(sorted_nums[i]) != mp.end())){
                mp[sorted_nums[i]] = i;
            }
        }

        for(int i=0; i<nums.size(); i++){
            if(mp.find(nums[i]) != mp.end())
                ans.push_back(mp[nums[i]]);
            else
                ans.push_back(mp[nums[i]]);
        }
       
        return ans;
    }
};