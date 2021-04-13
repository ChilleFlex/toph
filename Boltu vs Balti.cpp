#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main()
{
    long x,y,sum1=0,sum2=0,a,b;
    while(scanf("%ld %ld",&a,&b)==2)
    {
        if(a>b)
        {
            x=a;
            y=b;
        }
        else if(b>=a)
        {
            x=b;
            y=a;
        }
        y--;

        sum1=y*(y+1)/2;
        sum2=x*(x+1)/2;

        pf("Sum of %ld to %ld is -> %ld;\n",y+1,x,sum2-sum1);
    }

}
