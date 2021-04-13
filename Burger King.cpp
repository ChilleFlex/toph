#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep0(t,tc)
    {
        int i,j,k,n,m;
        cin>>n>>m;
        ll b,p;
        cin>>b;
        int cnt=0;
        vector<ll>vec;
        rep0(i,n)
        {
            cin>>p;
            vec.push_back(p);
            if(p==b)
                cnt++;
        }
        cout<<"Case "<<t+1<<": ";
        if(m==2)
        {
            cnt=0;
            rep0(i,n-1)
            {
                for(j=i+1;j<n;j++)
                {
                    if(vec[i]+vec[j]==b)
                        cnt++;
                }
            }
        }
        else if(m==3)
        {
            cnt=0;
            rep0(i,n-2)
            {
                for(j=i+1;j<n-1;j++)
                {
                    for(k=j+1;k<n;k++)
                    {
                        if(vec[i]+vec[j]+vec[k]==b)
                            cnt++;
                    }
                }
            }
        }
        cout<<cnt<<endl;
    }
}
