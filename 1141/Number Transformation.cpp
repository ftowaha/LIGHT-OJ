#include<bits/stdc++.h>
using namespace std;
vector<int>prime[1010];
int dis[1010];
void prm(int n)
{
    int x=2,z=n;
    while(n>1)
    {
        int y=n;
        while(n%x==0)
        {
            n=n/x;
        }
        if(n!=y)
            prime[z].push_back(x);
        if(z==x)
            prime[z].clear();
        x++;

    }
}
bool bfs(int u,int v)
{
    for(int i=0;i<=v;i++)
        dis[i]=0;
    queue<int>qq;
    qq.push(u);
    while(!qq.empty())
    {
        int x=qq.front();
        qq.pop();
        for(int i=0;i<prime[x].size();i++)
        {
            int y=prime[x][i];
            if(x+y==v)
            {
                dis[x+y]=dis[x]+1;
                return true;
            }
            else if(x+y<v&&dis[x+y]==0)
            {
                qq.push(x+y);
                dis[x+y]=dis[x]+1;
            }
        }
    }
    return false;
}
int main()
{
    //freopen("input.txt","r",stdin);
    for(int i=2;i<1001;i++)
        prm(i);
    int m;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        if(bfs(u,v)==1)
            cout<<"Case "<<i<<": "<<dis[v]<<endl;
        else if(u==v)
            cout<<"Case "<<i<<": "<<0<<endl;
        else cout<<"Case "<<i<<": "<<-1<<endl;
    }
    return 0;
}
