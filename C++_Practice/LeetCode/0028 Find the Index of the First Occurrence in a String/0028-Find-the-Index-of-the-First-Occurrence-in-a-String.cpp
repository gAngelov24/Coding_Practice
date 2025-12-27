class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int len = needle.size();

        for (int i = 0; i <= n-len; i++){
            string sub = haystack.substr(i, len);
            // cout << "sub = " << sub << endl;
            if (sub == needle){
                return i;
            }
        }
        return -1;
    }
};