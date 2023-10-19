class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();
        int m=t.size();

        int i=0,j=i+1;
        while(j<s.size())
        {
            if(s[0]=='#')
            {
                s.erase(s.begin());
            }
            if(s[j]=='#')
            {
                s.erase(s.begin()+i, s.begin()+j+1);
                if(i==0 || j==1)
                {
                    continue;
                }
                else
                {
                    j--;
                    i--;

                }
            }
            else
            {
                i++;
                j++;
            }
        }
int a=0,b=a+1;
        while(b<t.size())
        {
            if(t[0]=='#')
            {
                t.erase(t.begin());
            }
            if(t[b]=='#')
            {
                t.erase(t.begin()+a, t.begin()+b+1);
                if(a==0 || b==1)
                {
                    continue;
                }
                else
                {
                a--;
                b--;
                }
            }
            else
            {
                a++;
                b++;
            }
        }

    return s==t;             
    }
};
