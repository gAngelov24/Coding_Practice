class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        char temp;
        int idx = 0;
        for (int i = n-1; i >= n/2; i--){
            temp = s[i];
            s[i] = s[idx];
            s[idx] = temp;
            idx++;
        }
    }
};