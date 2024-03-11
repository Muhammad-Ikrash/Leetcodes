class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int size = s.length();
        int ones = 0;
        for (int i = 0; i< size; i++){
            if (s[i] == '1') ones++;
        }
        string ret = "";
        for (int i = 0; i < size - 1; i++){
            if (i < ones - 1) ret += '1';
            else ret += '0';
        }
        ret +='1';
        return ret;
    }
};