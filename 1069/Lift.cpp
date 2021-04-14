#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d %d",&a,&b);
        b=abs(a-b)*4;
        a=a*4;
        a=a+b+19;
        printf("Case %d: %d\n",i,a);
    }
    return 0;
}
