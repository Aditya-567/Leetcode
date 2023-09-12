class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans(n);

        for (int index=0;index<n;index++)
        {
            int newIndex=(index + k)%n;
            ans[newIndex]= nums[index];
        }
        nums=ans;

    }
};
