class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> seen;
        int k = 0;
        for (int i = 0; i < nums.size(); i++){
            if(!seen.contains(nums[i])){
                nums[k] = nums[i];
                k++;
            }
            seen[nums[i]] = i;
        }
        return k;
    }
};