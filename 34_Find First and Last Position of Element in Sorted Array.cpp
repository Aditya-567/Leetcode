class Solution {
public:

    int findFirstOccurence(vector<int>arr,int n,int target){
    int ans =-1;
  
    int start = 0;
    int end= n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(target == arr[mid]){
            ans = mid;
            end = mid -1;
        }
        else if(target < arr[mid]){
            end=mid -1;
        }
        else if(target > arr[mid]){
            start =mid +1;
        }
        mid=(start+end)/2;

    }
    return ans;
}
int findLastOccurence(vector<int>arr,int n,int target){
    int ans =-1;
  
    int start = 0;
    int end= n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if(target == arr[mid]){
            ans = mid;
            start = mid+1;
        }
        else if(target < arr[mid]){
            end=mid -1;
        }
        else if(target > arr[mid]){
            start =mid +1;
        }
        mid=(start+end)/2;

    }
    return ans;
}
    vector<int> searchRange(vector<int>& arr, int target) {
       int n=arr.size();
       vector<int>occ;

        occ.push_back(findFirstOccurence(arr,n,target));
        occ.push_back(findLastOccurence(arr,n,target));

        return occ;
    }
};
