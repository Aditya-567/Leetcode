class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start=0,end=0;
        while(start<nums.size() && end<nums.size()){
            if(nums[end]!=0){
                swap(nums[start],nums[end]);
                start++;
                end++;
            }
            else{
                end++;
            }
        }
    }
};
