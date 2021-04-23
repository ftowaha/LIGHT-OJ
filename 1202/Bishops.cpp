#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c1,r1,c2,r2;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        if((c1+r1)%2==(c2+r2)%2)
        {
            c1=abs(c1-c2);
            c2=abs(r1-r2);
            if(c1==c2)
              printf("Case %d: 1\n",i);
            else printf("Case %d: 2\n",i);
        }
        else printf("Case %d: impossible\n",i);
    }
    return 0;
}
