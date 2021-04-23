#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,x;
    //freopen("input.txt","r",stdin);
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        long long int y,z,x1;
        scanf("%lld",&y);
        z=y/9;
        if(y%9!=0)
            printf("Case %d: %lld",i,y+z);
        else printf("Case %d: %lld %lld",i,y+z-1,y+z);
        printf("\n");
    }
    return 0;
}
