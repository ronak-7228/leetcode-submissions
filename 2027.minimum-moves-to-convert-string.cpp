class Solution {
public:
    int minimumMoves(string s) {
        int a = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'X'){
                for(int j=i;j<i+3 && j < s.length();j++){
                    s[j] = 'O';
                    
                }
                a++;
            }
        }
        return a;
    }
};