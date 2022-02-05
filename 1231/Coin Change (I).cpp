#include<bits/stdc++.h>
using namespace std;
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int A[51], B[51], dp[51][1001],n;
int solve(int cur,int rem)
{
    if(rem<0)
        return 0;
    if(rem==0)
        return 1;
    if(dp[cur][rem]!=-1)
        return dp[cur][rem];
    if(cur>=n)
        return 0;
    int ans=0;
    for(int i=0;i<=B[cur];i++)
    {
        int newrem=rem-(A[cur]*i);
        ans+=solve(cur+1,newrem);
    }
    //cout<<ans<<endl;
    return dp[cur][rem]=ans%100000007;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    fast();
    cin>>t;
   for(int ii=1;ii<=t;ii++)
    {
        int i,j,k;
        cin>>n>>k;
        for(i=0;i<n;i++)
            cin>>A[i];
        for(i=0;i<n;i++)
            cin>>B[i];
        memset(dp, -1, sizeof(dp));
        cout<<"Case "<<ii<<": "<<solve(0,k)<<endl;
    }
    return 0;
}
