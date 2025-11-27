class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp;
        for(char c : s){
         mp[c]++;
        }
        for(char c : t) {
        mp[c]--;
        }
        char answer;
        for(auto &p : mp){
            if(p.second != 0){
               answer=p.first;
            }
        }
    return answer;
    }
};
