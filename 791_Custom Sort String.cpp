class Solution {
public:
    static string orderstr;
    static bool compare(char ch1,char ch2){
        char a = orderstr.find(ch1);
        char b = orderstr.find(ch2);
        return a<b;
    }
    string customSortString(string order, string s) {
        orderstr=order;
        sort(s.begin(),s.end(),compare);
        return s;
    }
};
string Solution ::orderstr;
