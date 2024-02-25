class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        """
        双指针，不利用额外空间，从后侧遍历
        
        """
        int p1 = m-1;
        int p2 = n-1;

        if (m == 0){
            nums1 = nums2;
        }
        else if (n == 0){
        }
        else{
            while (p1 >= 0 || p2 >= 0){
                if (p1 < 0){
                    nums1[p1 + p2 + 1] = nums2[p2];
                    p2 --;
                }
                else if (p2 < 0){
                    nums1[p1 + p2 + 1] = nums1[p1];
                    p1 --;
                }
                else if (nums2[p2] > nums1[p1]){
                    nums1[p1 + p2 + 1] = nums2[p2];
                    p2 --;
                }
                else{
                    nums1[p1 + p2 + 1] = nums1[p1];
                    p1 --;
                }
            }
        }
    }
};