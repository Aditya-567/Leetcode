class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        if (n==1){
            return true;
        }
        //taking two flag variable
        bool increment = true;
        bool decrement = true;

        for(int i=1;i<n;i++){
            //if both flage changes vector is not
            // continuous increment or decrement
            if(!increment && !decrement){
                return false;
            }
            if(nums[i]<nums[i-1]){
                increment =false;
            }
            if (nums[i]>nums[i-1]){
                decrement= false;
            }
        }
        return increment || decrement;
    }
};
