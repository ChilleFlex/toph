#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
int ara[N];
int main()
{
    int i,n,k,mx=-1,p;
    sff(n,k);
    rep0(i,n)
    {
        sf(p);
        ara[p]++;
        mx=max(mx,ara[p]);
    }
    rep(i,k)
    {
        if(ara[i]==mx)
        {
            cout<<i<<endl;
            return 0;
        }
    }
}
