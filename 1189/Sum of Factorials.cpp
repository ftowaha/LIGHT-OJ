#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int A[20],B[20],k,l,a,i,j;
    A[0]=1;
    for(i=1;i<=19;i++)
    {
        A[i]=A[i-1]*i;
    }
    //freopen("input.txt","r",stdin);
    int n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&l);
        k=0;
        for(j=19;j>=0;--j)
        {
            if(A[j]<=l)
            {
                B[k]=j;
                k++;
                l=l-A[j];
            }
        }
        if(l==0)
        {
            printf("Case %d: ",i);
            for(j=k-1;j>=0;j--)
            {
                printf("%d!",B[j]);
                if(j!=0)
                    printf("+");
            }
            printf("\n");
        }
        else printf("Case %d: impossible\n",i);
    }
    return 0;
}
