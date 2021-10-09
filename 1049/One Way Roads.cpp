#include<bits/stdc++.h>
#define ff                first
#define ss                second
#define pii               pair<int,int>
#define vi                vector<int>
#define mp                make_pair
#define For(i, n)         for (int i = 0; i < n; i++)
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define ps                push
#define pf                push_front
#define mp                make_pair
#define pi                2 * acos(0.0)
using namespace std;
const long long INF = 1ll << 32;
void fast_stream() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int vec[105][105];
bool vis[105][105];
void test()
{
    memset(vec,0, sizeof vec);
    memset(vis,0, sizeof vis);
    int n,i,j,ans=INT_MAX,cur,last,sum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vec[b][a]=c;
        vis[a][b]=vis[b][a]=1;
    }
    for(i=2;i<=n;i++)
    {
        cur=i;
        last=1;
        sum=vec[1][i];
        if(vis[1][i]==1)
        {
            while(cur!=1)
            {
                for(j=1;j<=n;j++)
                {
                    if(vis[cur][j]==1&&j!=last&&j!=i)
                    {
                        sum+=vec[cur][j];
                        last=cur;
                        cur=j;
                        break;
                    }
                }
            }
            ans=min(ans,sum);
        }
        //cout<<sum<<endl;
    }
    cout<<ans<<endl;
}
int main()
{
    fast_stream();
    //freopen("input.txt","r",stdin);
    int ii,m;
    cin>>m;
    for(ii=1;ii<=m;ii++)
    {
        cout<<"Case "<<ii<<": ";
        test();
    }
    return 0;
}
