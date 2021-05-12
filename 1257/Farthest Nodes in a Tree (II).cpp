#include<bits/stdc++.h>
using namespace std;
vector<int>graph[30001];
vector<int>cost[30001];
int dis[30001],dis1[30001];
void bfs1(int a)
{
    queue<int>qq;
    qq.push(a);
    dis1[a]=0;
    while(!qq.empty())
    {
        a=qq.front();
        qq.pop();
        for(int i=0;i<graph[a].size();i++)
        {
            int y=graph[a][i];
            if(dis1[y]==-1)
            {
                dis1[y]=dis1[a]+cost[a][i];
                qq.push(y);
            }
        }
    }
    return;
}
void bfs(int a)
{
    queue<int>qq;
    qq.push(a);
    dis[a]=0;
    while(!qq.empty())
    {
        a=qq.front();
        qq.pop();
        for(int i=0;i<graph[a].size();i++)
        {
            int y=graph[a][i];
            if(dis[y]==-1)
            {
                dis[y]=dis[a]+cost[a][i];
                qq.push(y);
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
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,j,mx=-1,mx1=-1;
        cin>>n;
        for(j=1;j<n;j++)
        {
            int a,b,c;
            cin>>a>>b>>c;
            graph[a].push_back(b);
            graph[b].push_back(a);
            cost[a].push_back(c);
            cost[b].push_back(c);
        }
        for(j=0;j<n;j++)
            dis[j]=-1,dis1[j]=-1;
        bfs(0);
        for(j=0;j<n;j++)
        {
            if(dis[j]>=mx)
            {
                mx=dis[j];
                mx1=j;
            }
            dis[j]=-1;
        }
        bfs(mx1);
        mx1=-1;
        mx=-1;
        for(j=0;j<n;j++)
        {
            if(dis[j]>=mx)
            {
                mx=dis[j];
                mx1=j;
            }
        }
        bfs1(mx1);
        cout<<"Case "<<i<<":"<<endl;
        for(j=0;j<n;j++)
            cout<<max(dis1[j],dis[j])<<endl;
        for(j=0;j<n;j++)
            graph[j].clear(),cost[j].clear(),dis[j]=-1;
    }
    return 0;
}
