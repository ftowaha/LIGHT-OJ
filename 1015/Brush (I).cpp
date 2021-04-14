#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        scanf("%d",&a);
        for(int j=1;j<=a;j++)
        {
            scanf("%d",&b);
            if(b>0)
                c+=b;
        }
        printf("Case %d: %d\n",i,c);

    }
    return 0;
}
