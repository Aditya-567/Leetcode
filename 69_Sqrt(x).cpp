class Solution {
public:
    int mySqrt(int x) {
        int start =0;
        int end = x;
        int ans = -1;
        long mid = start+(end - start)/2;
        while(start<=end){
            if(mid*mid == x){
                return mid;
            }else if(mid*mid<x){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
            mid =start+(end -start)/2;

        }return ans;
    }
};
