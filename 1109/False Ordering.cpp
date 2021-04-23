#include<bits/stdc++.h>
using namespace std;
int A[1001],B[1001],i,j;
void init()
{
    for(i=1;i<=1000;i++)
    {
        for(j=i;j<=1000;j+=i)
        {
            A[j]++;
        }
    }
}
void xyz()
{
    for(i=1;i<=1000;i++)
    {
        int k=INT_MAX,l=0;
        for(j=1;j<=1000;j++)
        {
            if(k==A[j]&&l<j)
            {
                k=A[j];
                l=j;
            }
            else if(k>A[j])
            {
                k=A[j];
                l=j;
            }
        }
        B[i]=l;
        A[l]=INT_MAX;
    }
}
int main()
{
    init();
    xyz();
    //freopen("input.txt","r",stdin);
    int n,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        printf("Case %d: %d\n",i,B[a]);
    }

    return 0;
}
