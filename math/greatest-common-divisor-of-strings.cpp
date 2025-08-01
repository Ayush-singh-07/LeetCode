class Solution {
public:

    int getGcd(int a, int b){
        while (b != 0){
           int temp = b;
           b = a%b;
           a = temp;
        }
        return a;
    }

    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 == str2+str1)
            return str1.substr(0, getGcd(str1.size(), str2.size()));
        return "";
    }
};