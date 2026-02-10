class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map <int, int> mp;
        int reapeated = -1;
        int missing = -1;

        for(int i: nums){
            mp[i]++;
        }

        for(int i=1; i<=nums.size(); i++){
            
            if(mp.find(i) != mp.end()){
                if(mp[i] > 1) reapeated = i;
            }
            else{
                missing = i;
            }
                
        }
        return {reapeated,missing};
    }
};