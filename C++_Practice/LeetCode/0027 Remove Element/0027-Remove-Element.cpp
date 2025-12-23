class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // init a current index

        for (int i = 0; i < nums.size(); i++){ // loop through nums
            if (nums[i] != val){ // only if nums[i] doesn't equal val do we set nums[k] equal to nums[i]
                // set nums[k] equal to nums[i] and increment k
                nums[k] = nums[i];
                k++; 
            }
        }
        return k;
    }
};