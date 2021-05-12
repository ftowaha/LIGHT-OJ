#include<bits/stdc++.h>
using namespace std;
vector<int>graph[110];
bool vis[110];
int time1[110],time2[110];
void clr()
{
    for(int i=0;i<=100;i++)
        vis[i]=0;
}
void clr1()
{
    for(int i=0;i<=100;i++)
    {
        vis[i]=0;
        graph[i].clear();
        time1[i]=0;
        time2[i]=0;
    }
}
void bfs1(int a)
{
    queue<int>qq;
    qq.push(a);
    vis[a]=1;
    while(!qq.empty())
    {
        a=qq.front();
        qq.pop();
        for(int i=0;i<graph[a].size();i++)
        {
            int y=graph[a][i];
            if(vis[y]==0)
            {
                vis[y]=1;
                time1[y]=time1[a]+1;
                qq.push(y);
            }
        }
    }
}
void bfs2(int a)
{
    queue<int>qq;
    qq.push(a);
    vis[a]=1;
    while(!qq.empty())
    {
        a=qq.front();
        qq.pop();
        for(int i=0;i<graph[a].size();i++)
        {
            int y=graph[a][i];
            if(vis[y]==0)
            {
                vis[y]=1;
                time2[y]=time2[a]+1;
                qq.push(y);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r",stdin);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,m,a,b,j;
        cin>>n>>m;
        for(j=0;j<m;j++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        cin>>a>>b;
        bfs1(a);
        clr();
        bfs2(b);
        int mx=0;
        for(j=0;j<n;j++)
        {
            mx=max(mx,time1[j]+time2[j]);
        }
        cout<<"Case "<<i<<": "<<mx<<endl;
        clr1();
    }
    return 0;
}
