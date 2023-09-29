class Solution {
public:
    string decodeMessage(string key, string message) {
        //create mapping 
        char start ='a';
        char mapping[280]={0};

        for(auto ch: key){
            if(ch != ' '&& mapping[ch] == 0){
                mapping[ch]=start;
                start++;
            }
        }
        //use mapping 
        string ans;
        for(auto ch: message){
            if(ch == ' '){
                ans.push_back(' ');
            }
            else{
                ans.push_back(mapping[ch]);
            }
        }
        return ans;
    }
};
