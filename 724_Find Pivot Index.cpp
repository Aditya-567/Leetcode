class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int leftsum = 0 , rightsum = 0 , prefix = 0;
        for(int i = 0 ; i < n ; i++){
            prefix += nums[i];
        }
        rightsum  = prefix ; 
        for(int j= 0 ; j<n ; j++){
            leftsum += nums[j]; 
            if(rightsum == leftsum) {
              return j;
            }
            rightsum -= nums[j];
        }
        return -1;
    }
};
