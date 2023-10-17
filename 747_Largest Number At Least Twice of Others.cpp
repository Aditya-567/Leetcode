class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index =0;
        int max=INT_MIN;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                index = i;

            }
        }
        sort(nums.begin(),nums.end());
        if(max >= 2*nums[nums.size()-2])
        {
            return index;
        }
        else
        {
            return -1;
        }
    }
};
