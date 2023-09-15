class Solution {
public:
    bool isPalindrome(int x) {
      long digit;
      long rev =0;
      long num = x;

      while(num>0){

        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;

      }
      return (rev == x);
        
    }
};
