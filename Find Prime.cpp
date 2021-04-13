#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
bool mark[N];
void sieve()
{
    int i,j;
    memset(mark,true,sizeof(mark));
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i+=2)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    mark[1]=false;
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n;
        sf(n);
        int x=n-1,y=n+1;
        while(!mark[x])
            x--;
        while(!mark[y])
            y++;
        pf("%d %d\n",x,y);
    }
}
