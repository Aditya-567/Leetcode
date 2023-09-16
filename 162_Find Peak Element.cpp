class Solution {
public:
    int findPeakElement(vector<int>& nums) {
               int n = nums.size();
        int s = 0;
        int e = n-1;
       

        while(s < e) {
            int mid = s + (e-s)/2;
            if(nums[mid] < nums[mid+1] ){
                //A wali line me hu
                //peak right me exist krti h 
                s = mid + 1;
            }
            else {
                //yaa toh main B line pr hu
                //ya toh main Peak element pr hu
                e = mid;
            }
            //mid update
            
        }
        return e; 
    }
};
