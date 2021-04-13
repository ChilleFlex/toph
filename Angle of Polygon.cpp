#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n;
        sf(n);
        double t=(n-2)*180.0;
        cout<<fixed<<setprecision(5)<<t/n<<endl;
    }
}
