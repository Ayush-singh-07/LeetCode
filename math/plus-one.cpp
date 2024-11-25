class Solution {
public:

    vector<int> plusOne(vector<int>& digits) {
        int carry=0, sum = 0;
        for(int i=digits.size()-1; i>=0; i--){

            if(i == digits.size()-1) 
                sum = digits[i]+carry+1;
            else
                sum = digits[i]+carry;
            
            if(sum > 9){
                digits[i] = sum%10;
                carry = sum/10;
            }
            else{
                digits[i] = sum;
                carry=0;
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