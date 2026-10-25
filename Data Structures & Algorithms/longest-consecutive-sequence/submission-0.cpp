class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longestStreak = 0;

        for (int n : numSet) {
            // Check if this is the start of a sequence
            if (!numSet.count(n - 1)) {
                int currentNum = n;
                int currentStreak = 1;

                // Count consecutive numbers
                while (numSet.count(currentNum + 1)) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }
        
        return longestStreak;
    }
};