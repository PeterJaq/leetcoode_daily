class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        """
        双指针，利用额外存储空间，从正面遍历
        """
        int p_1 = 0;
        int p_2 = 0;
        int cur_num;
        int nums3[m + n];

        while (p_1 < m || p_2 < n) {
            if (p_1 == m) {
                cur_num = nums2[p_2];
                p_2 += 1;
            } else if (p_2 == n) {
                cur_num = nums1[p_1];
                p_1 += 1;
            } else if (nums1[p_1] < nums2[p_2]) {
                cur_num = nums1[p_1];
                p_1 += 1;
            } else {
                cur_num = nums2[p_2];
                p_2 += 1;
            }
            nums3[p_1 + p_2 - 1] = cur_num;
        }
        for (int i = 0; i != m + n; i++) {
            nums1[i] = nums3[i];
        }
    }
};