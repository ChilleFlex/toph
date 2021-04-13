#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        int i,j,n,m;
        sff(n,m);
        getchar();
        string a[n+1];
        rep0(i,n)
            cin>>a[i];
        set<string>st;
        set<string>::iterator it;
        rep0(i,n)
        {
            j=0;
            while(j<m)
            {
                string b="";
                while(a[i][j]=='X')
                {
                    if(j==m-1)
                        break;
                    j++;
                }
                while(j<m)
                {
                    if(j==m-1 || a[i][j]=='X')
                    {
                        if(a[i][j]!='X')
                            b+=a[i][j];
                        if(b.size()>1)
                            st.insert(b);
                        break;
                    }
                    else
                        b+=a[i][j];
                    j++;
                }
                j++;
            }
        }
        rep0(j,m)
        {
            i=0;
            while(i<n)
            {
                string b="";
                while(a[i][j]=='X')
                {
                    if(i==n-1)
                        break;
                    i++;
                }
                while(i<n)
                {
                    if(i==n-1 || a[i][j]=='X')
                    {
                        if(a[i][j]!='X')
                            b+=a[i][j];
                        if(b.size()>1)
                            st.insert(b);
                        break;
                    }
                    else
                        b+=a[i][j];
                    i++;
                }
                i++;
            }
        }
        pf("Case %d: ",t);
        cout<<*st.begin()<<endl;
    }
}
