#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char,int> smap;
        std::unordered_map<char,int> tmap;

        for(char word:s){
            if(smap.contains(word)){
                smap[word] = smap[word]+ 1;
            }else{
                smap.insert({word,1});
            }
        }
        for(char word:t){
            if(tmap.contains(word)){
                tmap[word] = tmap[word]+ 1;
            }else{
                tmap.insert({word,1});
            }
        }

        if(smap == tmap){
            return true;
        }
        return false;

    }
};
