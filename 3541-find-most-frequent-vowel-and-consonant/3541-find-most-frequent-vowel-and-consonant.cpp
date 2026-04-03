class Solution {
public:
    int maxFreqSum(string s) {
       map<char,int>vowel;
       map<char,int>consonant;
       for(int i=0;i<s.size();i++){
        char ch = s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel[s[i]]++;
        }else{
            consonant[s[i]]++;
        }
       }
       int maxVow = 0;
       int maxCon = 0;
       for(auto it:vowel){
        maxVow = max(maxVow,it.second);
       }
       for(auto it:consonant){
        maxCon = max(maxCon,it.second);
       }
       return maxVow+maxCon;
    }
};