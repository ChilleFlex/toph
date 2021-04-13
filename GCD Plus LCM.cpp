#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        ll a,b;
        sll(a,b);
        ll g=__gcd(a,b);
        ll l=(a/g)*b;
        if(g+l==a+b)
            puts("true");
        else
            puts("false");
    }
}
