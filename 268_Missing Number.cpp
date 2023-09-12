class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int temp=0;
        int n=nums.size();
        for(int index=0;index<n;index++)
        {
            temp=temp+nums[index];
        }

        int total = (n*(n+1))/2;
        total-=temp;
        return total;

    }
};
