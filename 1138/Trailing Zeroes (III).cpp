#include<bits/stdc++.h>
using namespace std;
long long int fn(long long int m)
{
    long long int x=0;
    while(m)
    {
        x+=(m/5);
        m=m/5;
    }
    return x;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        long long int m;
        scanf("%lld",&m);
        long long int l=0,r=1e9+1,mid,ans=-1,a;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            a=fn(mid);
            if(a==m)
            {
                ans=mid;
                break;
            }
            else if(a>m)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
            //printf("%lld\n",mid);
        }
        if(ans==-1)
            printf("Case %d: impossible\n",i);
        else printf("Case %d: %lld\n",i,ans-(ans%5));
    }
    return 0;
}
