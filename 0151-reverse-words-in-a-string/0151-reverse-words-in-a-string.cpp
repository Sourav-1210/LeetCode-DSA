class Solution {
public:
    string reverseWords(string s) {
        vector<string>words;
        stringstream ss(s);
        string word;
        while(ss>>word){
            words.push_back(word);
        }
        reverse(words.begin(),words.end());
        string sentence;
        for(int i=0;i<words.size();i++){
            sentence+=words[i];
            if(i!=words.size()-1){
                sentence+=" ";
            }
        } 
        return sentence;
    }
};