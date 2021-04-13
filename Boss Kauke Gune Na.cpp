#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,k,x,i,p;
        vector<int>vec;
        sff(n,k);
        rep(i,n)
        {
            sf(p);
            if(i==k)
                x=p;
            else
                vec.pb(p);
        }
        sort(all(vec));
        int j=0;
        rep(i,n)
        {
            if(i==k)
                pf("%d",x);
            else
                pf("%d",vec[j++]);
            if(i!=n)
                pf(" ");
        }
        nl
    }
}
