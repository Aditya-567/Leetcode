class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(),s.end());

        // two pointer approach;
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};
