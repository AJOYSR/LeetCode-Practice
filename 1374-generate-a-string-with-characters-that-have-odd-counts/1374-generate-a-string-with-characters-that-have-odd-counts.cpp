class Solution {
public:
    string generateTheString(int n) {
        if(n%2!=0){
            string str(n,'a');
            return str;
        }
        else {
            string str(n-1,'a');
            str+='b';
            return str;
        }
    }
};