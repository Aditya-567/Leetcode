class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int max =1;
        arr[0]=1;
        for(int i =1;i<arr.size();i++){
            if(arr[i]>max){
                max += 1;
            }
        }
        return max;
    }
};
