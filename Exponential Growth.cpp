#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
ll bigmod(ll a,ll p,ll m)
{
    ll res=1%m,x=a%m;
    while(p)
    {
        if(p&1)
            res=(res*x)%m;
        x=(x*x)%m;
        p>>=1;
    }
    return res;
}
int main()
{
    ll x,n;
    cin>>x>>n;
    cout<<bigmod(x,n,MOD);
}
