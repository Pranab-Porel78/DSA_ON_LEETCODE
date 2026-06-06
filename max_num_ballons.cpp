class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char,int> freq;
        for(char c :text){
            freq[c]++;
        }
        int count=0;
        while(freq['b']>=1 &&
              freq['a']>=1 &&
              freq['l']>=2 &&
              freq['o']>=2 &&
              freq['n']>=1 ){
                freq['b']--;
                freq['a']--;
                freq['l']-=2;
                freq['o']-=2;
                freq['n']--;

                count++;
        }
        return count;
        
    }
};