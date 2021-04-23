#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int A[mx],ARR[mx*4];
void init(int node,int b,int e)
{
    if(b==e)
    {
        ARR[node]=A[b];
        return;
    }
    int left,right,mid;
    mid=(b+e)/2;
    left=node*2;
    right=(node*2)+1;
    init(left,b,mid);
    init(right,mid+1,e);
    ARR[node]=ARR[left]+ARR[right];
}
int query(int node,int b,int e,int x,int y)
{
    if(b>y||e<x)
        return 0;
    if(b>=x&&e<=y)
        return ARR[node];
    int left=node*2,right=(node*2)+1,mid=(b+e)/2,p1,p2;
    p1=query(left,b,mid,x,y);
    p2=query(right,mid+1,e,x,y);
    return p1+p2;
}
void update(int node,int b,int e,int x,int y,int newvalue)
{
    if(b>y||e<x)
        return;
    if(b>=x&&e<=y)
    {
        ARR[node]+=newvalue;
        return;
    }
    int left=node*2,right=(node*2)+1,mid=(b+e)/2;
    update(left,b,mid,x,y,newvalue);
    update(right,mid+1,e,x,y,newvalue);
    ARR[node]=ARR[left]+ARR[right];
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Case %d:\n",i);
        int p,q,j,x,y,z;
        scanf("%d %d",&p,&q);
        for(j=1;j<=p;j++)
        {
            scanf("%d",&A[j]);
        }
        init(1,1,p);
        for(j=0;j<q;j++)
        {
            scanf("%d",&x);
            if(x==1)
            {
                scanf("%d",&z);
                z++;
                printf("%d\n",A[z]);
                y=-A[z];
                A[z]=0;
                update(1,1,p,z,z,y);
            }
            else if(x==2)
            {
                scanf("%d %d",&z,&y);
                z++;
                A[z]+=y;
                update(1,1,p,z,z,y);
            }
            else
            {
                scanf("%d %d",&z,&y);
                z++;
                y++;
                int s=query(1,1,p,z,y);
                printf("%d\n",s);
            }
        }
    }
    return 0;
}
