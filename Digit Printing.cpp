#include <bits/stdc++.h>

using namespace std;
string a[12];
int t,tc;
void setval()
{
    a[0]="**** ** ** ****";
    a[1]=" *  *  *  *  * ";
    a[2]="***  *****  ***";
    a[3]="***  ****  ****";
    a[4]="* ** ****  *  *";
    a[5]="****  ***  ****";
    a[6]="****  **** ****";
    a[7]="***  *  *  *  *";
    a[8]="**** ***** ****";
    a[9]="**** ****  *  *";
}
void print(ll n)
{
    if(n)
    {
        int dig=0;
        ll m=n;
        vector<int>vec;
        while(m)
        {
            dig++;
            vec.pb(m%10);
            m/=10;
        }
        reverse(all(vec));
        string b[6];
        int i,j=0,k,l;
        rep0(i,5)
        {
            for(l=0;l<dig;l++)
            {
                int now=vec[l];
                for(k=i*3;k<(i*3)+3;k++)
                    cout<<a[now][k];
                if(l!=dig-1)
                    cout<<" ";
            }
            cout<<endl;
        }
    }
    else
       cout<<"***"<<endl<<"* *"<<endl<<"* *"<<endl<<"* *"<<endl<<"***"<<endl;
    if(t!=tc)
        cout<<endl;
}
int main()
{
    setval();
    cin>>tc;
    rep(t,tc)
    {
        ll a,b;
        char ch;
        cin>>a>>ch>>b;
        if(ch=='+')
            a+=b;
        else if(ch=='-')
            a-=b;
        else if(ch=='*')
            a*=b;
        cout<<"Case #"<<t<<":"<<endl;
        print(abs(a));

    }
}
