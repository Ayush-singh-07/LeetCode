class Solution {
public:

    string rev(string str){
        int start = 0, end = str.size()-1;
        while(start < end){
            swap(str[start], str[end]);
            start++;
            end--;
        }
        return str;
    }

    bool isPalindrome(string s) {
        string plain = "";
        for(auto i: s){
            if(isalpha(i) || isdigit(i))
                plain+=tolower(i);
        }
        return plain == rev(plain);

    }
};