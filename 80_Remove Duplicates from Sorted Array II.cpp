class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(i < n - 2 && nums[i] == nums[i+1] && nums[i] == nums[i+2]) {
                nums.erase(nums.begin() + i + 2);
                n--;
                i--;
            }
        }
        return n;
    }
};
