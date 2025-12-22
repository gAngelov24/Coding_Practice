//#include <unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        vector<int> output;

        for(int i = 0; i < nums.size(); i++){
            int needed = target - nums[i];
            if (seen.contains(needed)){ // found needed in seen
                output.push_back(i);
                output.push_back(seen.at(needed));
                return output;
            }
            seen.insert({nums[i], i});
        }
        return output;
    }
};