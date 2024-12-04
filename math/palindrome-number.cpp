class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 ) return false;

        int n = x;
        int rev =0;
        while(n!=0){
            int t = n%10;
            rev = rev*10+t;
            n/=10;
        }
        return rev == x;
    }
};