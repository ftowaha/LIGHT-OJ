#include<bits/stdc++.h>
using namespace std;
double A[1000007];
int main()
{
    int n,i;
    A[0]=0;
    for(i=1;i<=1000000;i++)
    {
        A[i]=A[i-1]+log(i);
        //printf("%d\n",A[i]);
    }
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,x;
        scanf("%d %d",&a,&b);
        x=A[a]/log(b);
        printf("Case %d: %d\n",i,x+1);
    }
    return 0;
}
