class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int count = 0;
        int countB = 0;
        int countA = 0;
        int countL = 0;
        int countO = 0;
        int countN = 0;
        for(int i=0;i<text.size();i++){
            if(text[i]=='b'){
                countB++;
            }else if(text[i] == 'a'){
                countA++;
            }else if(text[i] == 'l'){
                countL++;
            }else if(text[i] == 'o'){
                countO++;
            }else if(text[i] == 'n'){
                countN++;
            }
        }
        while(countB>=1 && countA>=1 && countL>=2 && countO>=2 && countN>=1){
            count++;
            countB--;
            countA--;
            countL-=2;
            countO-=2;
            countN--;
        }
        return count;
    }
};