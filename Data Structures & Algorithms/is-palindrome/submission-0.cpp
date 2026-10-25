class Solution {
public:
    bool isPalindrome(string s) {
        string forward;
        string back;
        for(char c : s){
            if(isalnum(c)){
                if(isupper(c)){
                    c = tolower(c);
                    forward += c;
                    back = c + back;
                }else{
                    forward +=c;
                    back = c + back;
                }

            }
        }
        cout << forward << "\n"<< back;
        if(forward == back){
            return true;
        }
        return false;
    }
};
