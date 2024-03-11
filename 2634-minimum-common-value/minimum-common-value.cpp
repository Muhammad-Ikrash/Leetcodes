class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i = 0, j = 0;
        int size1 = nums1.size(), size2 = nums2.size();
        if (nums1[0] > nums2[size2 - 1] || nums1[size1 - 1] < nums2[0]){
            return -1;
        }
        while (i < size1 && j < size2){
            while (nums1[i] < nums2[j]){
                i++;
            }
            if (nums1[i] == nums2[j]){
                return nums1[i];
            }
            j++;
        }
        return -1;
    }
};