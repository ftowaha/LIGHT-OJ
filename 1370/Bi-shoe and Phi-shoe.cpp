#include<bits/stdc++.h>
using namespace std;
bool A[10000001];
void seive()
{
    int i,j;
    A[0]=true;
    A[1]=true;
    A[2]=false;
    for(i=4;i<=10000000;i+=2)
        A[i]=true;
    for(i=3;i<=10000000;i+=2)
    {
        if(A[i]==false)
        {
            for(j=i+i;j<=10000000;j+=i)
                A[j]=true;
        }
    }
}
int main()
{
    seive();
    //freopen("input.txt","r",stdin);
    long long int n,x,i,j,ans,y;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&x);
        ans=0;
        while(x--)
        {
            scanf("%lld",&y);
            y++;
            for(j=y;;j++)
            {
                if(A[j]==0)
                {
                    ans+=j;
                    break;
                }
            }
        }
        printf("Case %lld: %lld Xukha\n",i,ans);
    }
    return 0;
}
