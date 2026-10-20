#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> all;
        vector<int> ans;
        for(int i = 0; i < nums.size();i++){             
            all[nums[i]] = i;
        }
        for(int i = 0; i < nums.size();i++){
            int left = target - nums[i];
            if(all.contains(left) && all[left] != i){
                ans.push_back(i);
                ans.push_back(all[left]);
                break;
            }
        }
        return ans;
    }
};
