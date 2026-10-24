class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freqMap;
        vector<int> res;
        for(int n : nums){
            if(freqMap.contains(n)){
                freqMap[n]++;
            }else{
                freqMap[n] = 1;
            }
        }
        vector<pair<int,int>> sorted(freqMap.begin(),freqMap.end());
        sort(sorted.begin(),sorted.end(), [](const auto&a, const auto&b){
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++){
            res.push_back(sorted[i].first);
        }
        return res;
    }
};
