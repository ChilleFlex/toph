#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        long double x1,y1,x2,y2,len,half_len,area,a,b,r,dis,half_dis;
        cin>>x1>>y1>>x2>>y2>>len;
        dis=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        r=(len-dis)/2;
        a=(2*r+dis)/2;
        half_len=len/2;
        half_dis=dis/2;
        b=sqrt((half_len*half_len)-(half_dis*half_dis));
        area=PI*a*b;
        cout<<fixed<<setprecision(10)<<area<<endl;
    }
}
