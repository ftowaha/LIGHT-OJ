#include<bits/stdc++.h>
using namespace std;
vector<int>graph[1010];
int dis[1010];
void clr(int x2)
{
    for(int i=1;i<=x2;i++)
    {
        graph[i].clear();
        dis[i]=0;
    }
}
void bfs(int x)
{
    bool vis[1010];
    for(int i=0;i<1010;i++)
        vis[i]=0;
    queue<int>qq;
    qq.push(x);
    vis[x]=1;
    dis[x]++;
    while(!qq.empty())
    {
        x=qq.front();
        qq.pop();
        for(int i=0;i<graph[x].size();i++)
        {
            int y=graph[x][i];
            if(vis[y]==0)
            {
                qq.push(y);
                vis[y]=1;
                dis[y]++;
            }
        }
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r",stdin);
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int x1,x2,x3,u,v;
        cin>>x1>>x2>>x3;
        vector<int>vec;
        for(int j=0;j<x1;j++)
        {
            cin>>u;
            vec.push_back(u);
        }
        while(x3--)
        {
            cin>>u>>v;
            graph[u].push_back(v);
        }
        for(int j=0;j<vec.size();j++)
        {
            bfs(vec[j]);
        }
        u=0;
        for(int j=1;j<=x2;j++)
        {
            if(dis[j]==x1)
                u++;
        }
        cout<<"Case "<<i<<": "<<u<<endl;
        clr(x2);
    }
    return 0;
}
