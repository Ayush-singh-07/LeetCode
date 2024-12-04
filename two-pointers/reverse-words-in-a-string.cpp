class Solution {
public:

    string rev(string x){
        int start= 0, end = x.size()-1;
        while(start < end){
            swap(x[start], x[end]);
            start++;
            end--;
        }
        return x;
    }

    string reverseWords(string s) {
        string word = "";
        string sentence = "";
        vector<string> ans;

        for(int i=s.size()-1; i>=0; i--){
            if(s[i] != ' '){
                word+=s[i];
            }
            else{
                if(!word.empty()){
                    ans.push_back(rev(word));
                }
                word = "";
            }
        }

        if(!word.empty()){
             ans.push_back(rev(word));
        }

        for(int i=0; i<ans.size(); i++){
            sentence+=ans[i];
            if(i!=ans.size()-1){
                sentence+=" ";
            }
        }
        
        return sentence;
    }
};