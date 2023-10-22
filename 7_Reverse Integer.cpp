class Solution {
public:
    int reverse(int x) {
        long temp=x,sum=0,digit;

        if(x<0)
        {
            temp=temp*-1;
        }
        while(temp>0)
        {
            digit=temp%10;
            sum=(sum*10)+digit;
            temp=temp/10;
        }
        if(sum>INT_MAX || sum<INT_MIN) return 0; 
        if(x<0)
        {
            return sum*(-1);
        }
        return sum;
    }
};
