class Solution {
public:

    int countPrimes(int n) {
        if(n==0)return false;

        vector<bool>prime(n,true);
        prime[0]=prime[1]=false;
        int ans=0;

        for(int i=2;i<n;i++){
            if(prime[i]){
                ans++;

                int j=2*i;
                while(j<n){
                    prime[j]=false;
                    j+=i;
                }

            }
        }
        return ans;
    }
};
