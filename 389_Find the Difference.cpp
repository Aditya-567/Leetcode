class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans =0;
        string add = s.append(t);
        int len=add.size(s+t);
        for(int i=0;i<len;i++){
            ans = ans^add[i];
        }
        return ans;
    }
};
