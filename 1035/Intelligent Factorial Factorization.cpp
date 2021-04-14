#include<bits/stdc++.h>
using namespace std;
int B[98];
int main()
{
    int A[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97},i,j,m,n;
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        for(j=2;j<=m;j++)
            B[j]=0;
        for(j=2;j<=m;j++)
        {
            int k=0,x=j;
            while(x!=1)
            {
                if(x%A[k]==0)
                {
                    B[A[k]]++;
                    x=x/A[k];
                    continue;
                }
                k++;

            }
        }
        int k=0;
        printf("Case %d: %d = ",i,m);
        for(j=2;j<=m;j++)
        {
            if(B[j]==0)
                continue;
            else if(B[j]!=0&&k==0)
            printf("%d (%d)",j,B[j]);
            else if(B[j]!=0) printf(" * %d (%d)",j,B[j]);
            k++;

        }
        printf("\n");
    }
    return 0;
}
