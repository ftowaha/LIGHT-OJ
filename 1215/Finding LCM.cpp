#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int x,long long int y)
{
    if(x%y==0)
        return y;
    return gcd(y,x%y);
}
int main()
{
    int n,i;
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        long long int x,y,z,a,j,m=1,b;
        scanf("%lld %lld %lld",&x,&y,&z);
        a=gcd(x,y);
        a=(x/a)*y;
        if(z%a!=0)
            printf("Case %d: impossible\n",i);
        else
        {
            x=z/a;
            while(1)
            {
                y=x*m;
                m++;
                b=gcd(y,a);
                b=(a*y)/b;
                if(b==z)
                {
                    printf("Case %d: %lld\n",i,y);
                    break;
                }
            }
        }
    }
    return 0;
}
