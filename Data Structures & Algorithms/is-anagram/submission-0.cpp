class Solution {
public:
    bool isAnagram(string s, string t) {
        int scnt[26] = {0};
        int tcnt[26] = {0};
        if(s.size() != t.size()){
            return false;
        }
        for(size_t i = 0; i < s.size(); i++){
            scnt[s[i] - 97]++;
            tcnt[t[i] - 97]++;
        }
        for(int i = 0; i < 26; i++){
            if(scnt[i] != tcnt[i]){
                return false;
            }
        }
        return true;
    }
};
