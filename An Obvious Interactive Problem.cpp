#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int main()
{
    string a;
    int hi=1000000,lo=1;
    fflush(stdout);
    while(1)
    {
        int mid=(hi+lo)/2;
        cout<<mid<<endl;
        fflush(stdout);
        cin>>a;
        if(a=="Bingo!")
            return 0;
        else if(a=="Bigger")
            lo=mid+1;
        else
            hi=mid-1;
    }
}
