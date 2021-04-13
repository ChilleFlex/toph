#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
ll phi(ll x)
{
    ll ret=1,i,pow;
    for(i=2;x!=1;i++)
    {
        pow=1;
        if(i>sqrt(x))
            break;
        while(!(x%i))
        {
            x/=i;
            pow*=i;
        }
        ret*=(pow-(pow/i));
    }
    if(x!=1)
        ret*=(x-1);
    return ret;
}
int main()
{
    ll n;
    sl(n);
    pf("%lld",phi(n));
}
