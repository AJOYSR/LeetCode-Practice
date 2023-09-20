class Solution {
public:
    // string removeTrailingZeros(string num) {
    //     string ans;
    //     int k ;
    //     for(int i=num.size()-1;i>=0;i--) {
    //             if(num[i]!='0') {
    //                 k = i;
    //                 break;
    //             }
    //     }
    //     ans = num.substr(0,k+1);
    //     return ans;
    // }
    string removeTrailingZeros(string num) {
        return regex_replace(num, regex("0+$"), "");
    }
};