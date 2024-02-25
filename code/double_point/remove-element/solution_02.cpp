class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int lp = 0;

        for (int rp=0; rp < n; rp++){
            if (nums[rp] != val){
                nums[lp] = nums[rp]; 
                lp++;
            }
        }
        return lp;
    }
};