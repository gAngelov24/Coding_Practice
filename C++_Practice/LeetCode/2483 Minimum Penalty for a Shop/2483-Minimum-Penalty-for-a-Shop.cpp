class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size(), count = 0;
        vector<int> penalty;
        vector<int> ret;
        for (int i = 0; i < n; i++){
            int pen = (customers[i] == 'Y') ? 1 : 0;
            penalty.push_back(pen);
            count+=pen;
        }
        ret.push_back(0); ret.push_back(count);
        for (int i = 0; i < n; i++){
            int change = (customers[i] == 'Y') ? -1:1;
            count+=change;
            if (count < ret[1]){
                ret[0] = i+1;
                ret[1] = count;
            }
        }
        return ret[0];

        /* ----- BRUTE FORCE METHOD ----- */
        // for (int j = 0; j <= n; j++){
        //     int cur = 0;
        //     for (int i = 0; i < n; i++){
        //         int pen = (customers[i] == 'Y') ? 1 : 0;
        //         if (i < j) {
        //             pen = !pen;
        //         }
        //         //cout << "j = " << j << ", i = " << i << endl;
        //         //cout << "customers[i] = " << customers[i] << ", pen = " << pen << endl;
        //         cur += pen;
        //     }
        //     //cout << "cur = " << cur << ", penalty[1] = " << penalty[1] << endl;
        //     if (cur < penalty[1]){
        //         penalty[0] = j;
        //         penalty[1] = cur;
        //     }
        // }
        // return penalty[0];
    }
};