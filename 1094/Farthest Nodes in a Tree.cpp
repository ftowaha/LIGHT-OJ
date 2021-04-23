#include<bits/stdc++.h>
#include<vector>
#include<queue>
using namespace std;
vector<int>graph[30001];
vector<int>weight[30001];
int dis[30001],mx;
bool vis[30001];
void bfs(int x)
{
    queue<int>qq;
    qq.push(x);
    while(!qq.empty())
    {
        int a=qq.front(),b;
        vis[a]=1;
        qq.pop();
        for(int i=0;i<graph[a].size();i++)
        {
            b=graph[a][i];
            if(vis[b]==0)
            {
                qq.push(b);
                vis[b]=1;
                dis[b]=dis[a]+weight[a][i];
            }
            mx=max(dis[b],mx);
        }
    }
    return ;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int t,ii;
    scanf("%d",&t);
    for(ii=1;ii<=t;ii++)
    {
        int i,n;
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            int a,b,c;
            scanf("%d %d %d",&a,&b,&c);
            graph[a].push_back(b);
            graph[b].push_back(a);
            weight[a].push_back(c);
            weight[b].push_back(c);
        }
        bfs(0);
        int xxx=0;
        mx=-1;
        for(int i=0;i<n;i++)
        {

            if(dis[i]>mx)
            {
                xxx=i;
                mx=dis[i];
            }
            dis[i]=0;
            vis[i]=0;
        }
        mx=-1;
        bfs(xxx);
        printf("Case %d: %d\n",ii,mx);
        for(i=0;i<=n;i++)
        {
            dis[i]=0;
            vis[i]=0;
            graph[i].clear();
            weight[i].clear();
        }
    }
    return 0;
}
