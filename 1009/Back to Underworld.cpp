#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>graph[20009];
bool vis[20009],type[20009];
void clr()
{
    memset(vis,0,20009);
    memset(type,0,20009);
    for(int j=0;j<20009;j++)
        graph[j].clear();
}
long long int bfs(int x)
{
    queue<int>qq;
    long long int lykans=0,vampyre=0,i;
    lykans++;
    qq.push(x);
    vis[x]=1;
    type[x]=1;
    while(!qq.empty())
    {
        int a=qq.front(),b;
        qq.pop();
        for(i=0;i<graph[a].size();i++)
        {
            b=graph[a][i];
            if(vis[b]==0)
            {
                vis[b]=1;
                qq.push(b);
                if(type[a]==1)
                {
                    type[b]=0;
                    vampyre++;
                }
                else
                {
                    type[b]=1;
                    lykans++;
                }
            }
        }
    }
    return max(lykans,vampyre);
}
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int n,j,a,b;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            scanf("%d %d",&a,&b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        long long int sum=0;
        for(j=0;j<20009;j++)
        {
            if(vis[j]==0&&graph[j].size()!=0)
            {
                sum+=bfs(j);
            }
        }
        printf("Case %d: %lld\n",i,sum);
        clr();
    }
    return 0;
}
