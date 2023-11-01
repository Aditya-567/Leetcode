class Solution {
public:
    string mergeAlternately(string word1, string word2) {
         string result ="";int i,j;
         for( i=0,j=0;i<word1.size()&&j<word2.size();){ 
             result+=word1[i++]; 
             result+=word2[j++]; 
        }
        for(;i<word1.size();){
            result+=word1[i++]; 
        }
        for(;j<word2.size();){
            result+=word2[j++];
        }
        return result; 
    } 


};
