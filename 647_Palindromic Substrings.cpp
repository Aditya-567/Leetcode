class Solution {
public:
    int expand(string s,int i,int j){
        int count =0;
        while(i>=0&&j<s.length()&&s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int total=0;
        int center =0;
        while(center<=s.length()){
            int oddcount=expand(s,center,center);
            int evencount=expand(s,center,center+1);
            total=total+oddcount+evencount;
            center++;
        }
        return total;
    }
};
