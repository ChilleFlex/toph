#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    while(tc--)
    {
        int i,n,k;
        sf(n);
        rep0(i,n)
        {
            sf(k);
            int dig=log10(k);
            int d=pow(10,dig);
            if(i==n-1)
            {
                pf("1");
                continue;
            }
            pf("%d",d);
            if(i!=n-1)
                pf(" ");
        }
        puts("");
    }
}
