class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int min_len = min(word1.size(), word2.size());
        string merged = "";
        
        for(int i=0; i<min_len; i++){
            merged += word1[i];
            merged += word2[i];
        }

        if(word1.size() > word2.size()){
            merged += word1.substr(min_len);
        }
        else if(word1.size()  < word2.size()){
            merged += word2.substr(min_len);
        }
        return merged;
    }
};