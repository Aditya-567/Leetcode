class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //s is starting index 
        //e is end index
        int e=nums.size()-1;
        int s=0,mid;

        while(s<=e)
        {
            mid=(s+e)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                //also handeled the case where target is greater than last index
                s=mid+1;
            }
        }
//if only one character in array then return the starting index[s] and also when the target is greater than last indesx
       return s; 
    }
};
