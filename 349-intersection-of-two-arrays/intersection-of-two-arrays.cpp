class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> inter{-1};
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i = 0; int j = 0;
        int size1 = nums1.size(), size2 = nums2.size();
        while (i < size1 && j < size2){
            if (nums1[i] < nums2[j]){
                i++;
            }
            else if (nums2[j] < nums1[i]){
                j++;
            }
            else {
                if (nums1[i] != inter.back()){
                    inter.push_back(nums1[i]);
                }
                i++, j++;
            }
        }
        inter.erase(inter.begin());
        return inter;
    }
};