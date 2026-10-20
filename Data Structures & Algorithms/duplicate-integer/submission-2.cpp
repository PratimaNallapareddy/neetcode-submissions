#include <unordered_map>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map <int, bool> dup;
        for(int i = 0; i < nums.size(); i++){
            if(dup.contains(nums[i])){
                return true;
            }else{
                dup.insert({nums[i],true});
            }
        }
        return false;
    }
};