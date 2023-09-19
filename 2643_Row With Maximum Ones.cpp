class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n =mat.size();
        vector<int>ans;
        int onecount=INT_MIN;
        int rowno;
        for(int i =0;i<n;i++){
            int count =0;
            for(int j =0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>onecount){
                onecount = count;
                rowno=i;
            }
        }
        ans.push_back(rowno);
        ans.push_back(onecount);
        return ans;


    }
};
