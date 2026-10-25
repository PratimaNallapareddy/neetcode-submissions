class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        string lens = "";
        string words = "";
        string tot = "";
        for(string s : strs){
            lens += to_string(s.size()) + ",";
            words+= s;
        }
        tot = lens + "#" + words;
        return tot;
    }

    vector<string> decode(string s) {
        
        int whenToStop = 0;
        //int curr = 0;
        vector<string> answer;
        if( s == ""){
            return answer;
        }
        vector<int> lens;
        for(int i = 0; i < s.size();i++){
            string n = "";
            if(s[i] == '#'){
                break;
            }
            while(s[i] != ','){
                n += s[i];
                i++;
            }
            lens.push_back(std::stoi(n));
            whenToStop = i;
        }
        whenToStop++;
        for(int l : lens){
            string word = "";
            for(int i = 0; i < l; i++){
               whenToStop += 1;
               word += s[whenToStop];
            }
            answer.push_back(word);
        }
        return answer;
    }

};
