class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int num_rm = 0;
        int num_length = nums.size();

        int p1 = 0;
        while (p1 + num_rm < num_length) {
            if (nums[p1] == val) {
                for (int idx = p1; idx < num_length - num_rm - 1; idx++) {
                    nums[idx] = nums[idx + 1];
                }
                num_rm++;
            } else {
                p1++;
            }
        }

        return num_length - num_rm;
    }
};