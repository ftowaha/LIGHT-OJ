#include<bits/stdc++.h>
using namespace std;
int m1,m2,vis[22][22];
string A[22];
bool cheak(int y,int x)
{
    if(y>=0&&y<m1&&x>=0&&x<m2&&A[y][x]!='m'&&A[y][x]!='#'&&vis[y][x]==0)
        return true;
    else return false;
}
int bfs(int y,int x)
{
    queue<int>qy;
    queue<int>qx;
    qy.push(y);
    qx.push(x);
    vis[y][x]=1;
    while(!qx.empty())
    {
        x=qx.front();
        y=qy.front();
        qx.pop();
        qy.pop();
        if(cheak(y-1,x))
        {
            if(A[y-1][x]=='h')
                return vis[y][x];
            qy.push(y-1);
            qx.push(x);
            vis[y-1][x]=vis[y][x]+1;
        }
        if(cheak(y+1,x))
        {
             if(A[y+1][x]=='h')
                return vis[y][x];
            qy.push(y+1);
            qx.push(x);
            vis[y+1][x]=vis[y][x]+1;
        }
        if(cheak(y,x-1))
        {
             if(A[y][x-1]=='h')
                return vis[y][x];
            qy.push(y);
            qx.push(x-1);
            vis[y][x-1]=vis[y][x]+1;
        }
        if(cheak(y,x+1))
        {
             if(A[y][x+1]=='h')
                return vis[y][x];
            qy.push(y);
            qx.push(x+1);
            vis[y][x+1]=vis[y][x]+1;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r",stdin);
    int i,t,j,k,a1,b1,a2,b2,a3,b3;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>m1>>m2;
        for(j=0;j<m1;j++)
            cin>>A[j];
        for(j=0;j<m1;j++)
        {
            for(k=0;k<m2;k++)
            {
                if(A[j][k]=='a')
                {
                    a1=j;
                    b1=k;
                }
                 else if(A[j][k]=='b')
                {
                    a2=j;
                    b2=k;
                }
                 else if(A[j][k]=='c')
                {
                    a3=j;
                    b3=k;
                }
            }
        }
        for(j=0;j<m1;j++)
        {
            for(k=0;k<m2;k++)
                vis[j][k]=0;
        }
        a1=bfs(a1,b1);
        for(j=0;j<m1;j++)
        {
            for(k=0;k<m2;k++)
                vis[j][k]=0;
        }
        a2=bfs(a2,b2);
        for(j=0;j<m1;j++)
        {
            for(k=0;k<m2;k++)
                vis[j][k]=0;
        }
        a3=bfs(a3,b3);
        a1=max(a1,max(a2,a3));
        cout<<"Case "<<i<<": "<<a1<<endl;
    }
    return 0;
}
