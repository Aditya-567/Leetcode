class Solution {
public:
    double myPow(double x, long n) {
        double ans=1;
        long m=n;
        if(n<0)
        {
            m=(-1)*m;
        }
        while(m>0)
        {
            if(m%2==1)
            {
                ans =ans*x;
                m-=1;
            }
            else
            {
                x=x*x;
                m=m/2;
            }
        }

        if(n<0)
        {
            ans= double(1.0)/double(ans);
        }

        return ans;
    }
};
