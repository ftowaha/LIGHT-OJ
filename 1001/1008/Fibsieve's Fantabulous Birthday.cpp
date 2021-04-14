#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        long long int a,n,b,c,x,y;
        scanf("%lld",&n);
        a=sqrt(n);
        y=a;
        if(a*a!=n)
            b=a+1;
        else b=a;
        if(b%2==0)
        {
            if(a*a==n)
            printf("Case %lld: %lld 1\n",i,a);
            else
            {
                x=(a+1)*(a+1);
                a=(a*a)+1;
                b=n-a;
                c=x-n;
                if(c>b)
                {
                    printf("Case %lld: %lld %lld\n",i,b+1,y+1);
                }
                else printf("Case %lld: %lld %lld\n",i,y+1,c+1);
            }
        }
        else if(b%2==1)
        {
            if(a*a==n)
            printf("Case %lld: 1 %lld\n",i,a);
            else
            {
                x=(a+1)*(a+1);
                a=(a*a)+1;
                b=n-a;
                c=x-n;
            if(c>b)
                {
                    printf("Case %lld: %lld %lld\n",i,y+1,b+1);
                }
                else printf("Case %lld: %lld %lld\n",i,c+1,y+1);
        }
        }
    }
    return 0;
}
