class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;

        for (int i = digits.size() - 1; i >= 0; i--) {
            if (i == digits.size() - 1)
                carry++;
            int x = digits[i] + carry;
            carry = 0;
            if (x > 9) {
                digits[i] = x % 10;
                carry = x / 10;
            } else {
                digits[i] = x;
            }
        }
        if(carry > 0){
            vector<int>ans;
            ans.push_back(carry);
            for(auto i: digits) ans.push_back(i);
            return ans;
        }

        return digits;
    }
};