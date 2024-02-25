class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int lp = 0;
        int rp = n;

        while (lp < rp) {
            cout << "lp: " << lp << " rp: " << rp << endl;
            if (nums[lp] == val) {
                nums[lp] = nums[rp - 1];
                rp--;
            } else {
                lp++;
            }
        }

        return lp;
    }
};