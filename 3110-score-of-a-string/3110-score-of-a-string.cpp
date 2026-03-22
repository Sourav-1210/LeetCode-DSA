class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=0;i<s.size()-1;i++){
            int val = abs(int(s[i])-int(s[i+1]));
            sum+=val;
        }
        return sum;
    }
};