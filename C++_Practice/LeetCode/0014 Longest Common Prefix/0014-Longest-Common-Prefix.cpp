class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string are mutable in C++!!!
        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++){
            string curr = strs[i];
            if(curr.size() < prefix.size()){
                prefix = prefix.substr(0, curr.size());
            }
            string::iterator it = prefix.begin();
            for(int j = 0; j < curr.size(); j++){
                if (curr[j] != prefix[j]){
                    prefix.erase(it, prefix.end());
                    break;
                }
                it++;
            }
        }
        return prefix;
    }
};