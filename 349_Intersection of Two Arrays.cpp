class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        

//method1--------------------------------------------
         vector <int> ans;
        for(int i=0;i<nums1.size();i++){
             for(int j=0;j<nums2.size();j++){
                if (nums1[i]==nums2[j]){
                 ans.push_back(nums2[j]);
                }
            }
         }
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1]){
                ans.erase(ans.begin()+i-1,ans.begin()+i);
                i--;
            }
         }
         return ans; -->


//method 2-------------------------------------------
        vector<int>ans;
        sort(nums2.begin(),nums2.end());

        for(int i=0;i<nums1.size();i++)
        {
        if (binary_search (nums2.begin(), nums2.end(), nums1[i]))
        {
            ans.push_back(nums1[i]);
        }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }

};
