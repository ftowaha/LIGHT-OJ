#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    long long int ans,n,a,b,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld %lld",&a,&b);
        ans=a*b;
        if(a==1||b==1)
            ans=ans;
        else if(a==2||b==2)
        {
            ans=max(a,b);
            if(ans%4==3||ans%4==1)
                ans++;
            else if(ans%4==2)
                ans+=2;
        }
        else if(ans%2==1)
            ans=(ans/2)+1;
        else ans=ans/2;
        printf("Case %lld: %lld\n",i,ans);
    }
    return 0;
}
