class Solution {
public:
    void helper(vector<int>& nums1, vector<int>& nums2) {
        // This helper takes nums2 and copies it into nums1 overriding any previous values num1 one retained
        for (int i = 0; i < nums1.size(); i++){
            nums1[i] = nums2[i];
        }
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // check if either nums1 or nums2 is empty
        if (m == 0){ // nums1 is empty, copy nums2 into nums1
            helper(nums1, nums2); 
            return;
        } else if (n == 0){
            return;
        }
        vector<int> merged; // temp vector
        int size = m + n; // size of merged array

        int idx1 = 0, idx2 = 0; // track what index of each array you are at 
        for (int i = 0; i < size; i ++){
            int num1 = nums1[idx1];
            //int num2 = nums2[idx2];
            cout << "idx1 = " << idx1 << ", idx2 = " << idx2 << endl;
            //cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
            if ((idx2 == n) || (num1 <= nums2[idx2] && (idx1 != m))){
                merged.push_back(num1); // add num1 to merged array
                idx1++; // increment nums1 current index
            } else { // if num2 is less than num1 add it to merged array
                merged.push_back(nums2[idx2]);
                idx2++;
            }
        }
        // now that merged has been build we need to copy it into nums1
        for (int i = 0; i < size; i++){
            nums1[i] = merged[i];
        }
    }
};