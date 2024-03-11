class Solution {
public:
    string customSortString(string order, string s) {
        int size = order.length(), size1 = s.length();
        int j = 0; 
        for (int i = 0; i < order.length();){
            int element = s.find(order[i], j);
            if (element != string::npos){
                swap (s[j],s[element]);
                j++;
            }
            else{
                i++;
            }
        }
        return s;
    }
};