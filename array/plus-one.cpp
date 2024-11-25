class Solution {
public:
    vector<int> getArray(long long sum){
        vector<int>ans;
        while(sum != 0){
            ans.push_back(sum%10);
            sum/=10;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    vector<int> plusOne(vector<int>& digits) {
        long long sum = 0;
        for(auto i: digits) sum= sum *10 + i;
        sum+=1;
        return getArray(sum);
    }
};