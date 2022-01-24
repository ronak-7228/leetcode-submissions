class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans;
        map<int,int> mp;
        for(int i=0;i<spaces.size();i++){
            mp[spaces[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(mp[i]){
                ans.push_back(' ');
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};