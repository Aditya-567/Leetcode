class Solution {
public:
    bool checkPerfectNumber(int num) {
        int ans=1;
        if(num==1){
            return false;
        }
       for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0){
            ans+=i+num/i;
        }
       }
       if (ans==num){
           return true;
       }
        return false;    
    }
};
