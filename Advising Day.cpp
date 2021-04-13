#include <bits/stdc++.h>


typedef long long int ll;
using namespace std;
int ara[N],tree[4*N];
void build(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=ara[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    build(left,b,mid);
    build(right,mid+1,e);
    tree[node]=max(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e || j<b)
        return 0;
    if(b>=i && e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return max(p1,p2);
}
int main()
{
    int i,n;
    sf(n);
    rep(i,n)
        sf(ara[i]);
    build(1,1,n);
    int q,k;
    sf(q);
    while(q--)
    {
        sf(k);
        if(k==1)
            puts("-1");
        else
            pf("%d\n",query(1,1,n,1,k-1));
    }
}

