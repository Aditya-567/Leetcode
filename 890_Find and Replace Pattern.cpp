class Solution {
public:
    //creating mapping and updating string
    void Createupdatemapping (string& str){
        //create mapping
        char start = 'a';
        char mapping[300]={0};

        for(auto ch: str){
            if(mapping[ch] ==0){
                mapping[ch]=start;
                start++;
            }
        }
        //update string
        for(int i=0;i<str.length();i++){
            char ch =str[i];
            str[i]=mapping[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string>ans;
        //create mapping and update mapping 
        Createupdatemapping(pattern);
        for(string str: words){
            //store str to temp string and then create mapping of temp
            string temp =str;
            Createupdatemapping(temp);

            //compare temp and pattern and if similar push str to ans string
            if(temp==pattern){
                ans.push_back(str);
            }
        }
        return ans;
    }
};
