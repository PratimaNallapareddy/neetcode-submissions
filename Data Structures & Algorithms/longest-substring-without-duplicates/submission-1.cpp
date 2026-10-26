class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> str;
        int fin(0);
        int left = 0;
        for(int i = 0; i < s.size(); i++){
            int substr = 0;
            
            if (str.count(s[i]) && str[s[i]] >= left) {
                left = str[s[i]] + 1;
            }

            str[s[i]] = i;
            fin = max(fin, i - left + 1);
            // if(str.contains(s[i])){
            //     substr = i - str[s[i]];
            //     str[s[i]] = i;
            // }else{
            //     str[s[i]] = i;
            // }
            // fin = max(fin, substr);
        }
        return fin;
    }
};
