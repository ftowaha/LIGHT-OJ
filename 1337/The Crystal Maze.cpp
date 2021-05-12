#include<bits/stdc++.h>
using namespace std;
string graph[510];
int x1,x2,dis[510][510];
bool vis[510][510];
void clr()
{
    int i,j;
    for(i=0;i<=500;i++)
    {
        for(j=0;j<=500;j++)
        {
            dis[i][j]=0;
            vis[i][j]=0;
        }
    }
}
bool cheak(int j,int i)
{
    if(j>=0&&j<x1&&i>=0&&i<x2&&graph[j][i]!='#'&&vis[j][i]==0)
        return true;
    else return false;
}
void bfs(int y,int x)
{
    int aaa=0;
    queue<int>qx;
    queue<int>qy;
    qy.push(y);
    qx.push(x);
    queue<int>qx1;
    queue<int>qy1;
    qy1.push(y);
    qx1.push(x);
    vis[y][x]=1;
    while(!qx.empty())
    {
        x=qx.front();
        qx.pop();
        y=qy.front();
        qy.pop();
        if(graph[y][x]=='C')
        {
            //cout<<y<<"\t"<<x<<endl;
            aaa++;
        }
        if(cheak(y-1,x))
        {
            vis[y-1][x]=1;
            qx.push(x);
            qy.push(y-1);
            qy1.push(y-1);
            qx1.push(x);
        }
        if(cheak(y+1,x))
        {
            vis[y+1][x]=1;
            qx.push(x);
            qy.push(y+1);
            qy1.push(y+1);
            qx1.push(x);
        }
        if(cheak(y,x-1))
        {
            vis[y][x-1]=1;
            qx.push(x-1);
            qy.push(y);
            qy1.push(y);
            qx1.push(x-1);
        }
        if(cheak(y,x+1))
        {
            vis[y][x+1]=1;
            qx.push(x+1);
            qy.push(y);
            qy1.push(y);
            qx1.push(x+1);
        }
    }
    while(!qx1.empty())
    {
        x=qx1.front();
        y=qy1.front();
        dis[y][x]=aaa;
        qx1.pop();
        qy1.pop();
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r",stdin);
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        int x3,j;
        cin>>x1>>x2>>x3;
        clr();
        for(j=0;j<x1;j++)
            cin>>graph[j];
        for(int ii=0;ii<=x1;ii++)
        {
            for(int jj=0;jj<=x2;jj++)
            if(vis[ii][jj]==0)
                bfs(ii,jj);
        }
        for(j=0;j<x3;j++)
        {
            int a,b;
            cin>>a>>b;
            cout<<dis[a-1][b-1]<<endl;
        }
    }
    return 0;
}
