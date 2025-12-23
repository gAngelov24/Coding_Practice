class Solution {
public:
    int romanToInt(string s) {
        int output = 0;
        char curr = s[0];
        int prev = 0;
        for (int i = 0; i < s.size(); i++){
            curr = s[i];
            int currVal;
            if (curr == 'I'){
                currVal = 1;
            } else if (curr == 'V'){
                currVal = 5;
            } else if (curr == 'X'){
                currVal = 10;
            } else if (curr == 'L'){
                currVal = 50;
            } else if (curr == 'C'){
                currVal = 100;
            } else if (curr == 'D'){
                currVal = 500;
            }  else {
                currVal = 1000;
            }
            // cout << "currVal = " << currVal << ", prev = " << prev << endl;
            if (currVal > prev){
                output -= prev;
                output += (currVal - prev);
                // cout << "output = " << output << ", currVal = " << currVal << ", prev = " << prev << endl;
            } else {
                output += currVal;
            }
            prev = currVal;
        }
        return output;
    }
};