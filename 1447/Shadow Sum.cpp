#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int A[20001]={0},n,j,k;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d",&k);
            A[abs(k)]=k;
        }
        k=0;
        for(j=1;j<=20000;j++)
        {
            k+=A[j];
        }
        printf("Case %d: %d\n",i,k);
    }
    return 0;
}
