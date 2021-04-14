#include<bits/stdc++.h>
using namespace std;
#define mx 100010
int A[mx],ARR[3*mx];
void init(int node,int b,int e)
{
    if(b==e)
    {
        ARR[node]=A[b];
        return;
    }
    int left=node*2,right=(node*2)+1,mid=(b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    ARR[node]=min(ARR[left],ARR[right]);
    return;
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return INT_MAX;
    if(i<=b&&j>=e)
        return ARR[node];
    int left=node*2,right=(node*2)+1,mid=(b+e)/2,p1,p2;
    p1=query(left,b,mid,i,j);
    p2=query(right,mid+1,e,i,j);
    return min(p1,p2);
}
int main()
{
    int t,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        int n,i,x,a,b,c;
        cin>>n>>x;
        for(i=1;i<=n;i++)
            cin>>A[i];
        init(1,1,n);
        printf("Case %d:\n",j);
        for(i=0;i<x;i++)
        {
            cin>>a>>b;
            c=query(1,1,n,a,b);
            printf("%d\n",c);
        }
    }
    return 0;
}
