class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map <int, int> mp;

        for(int i: nums){
            mp[i]++;
        }

        for(auto i: mp){
            cout<<i.first<<" -> "<<i.second<<"\n";
        }

        return nums;
    }
};