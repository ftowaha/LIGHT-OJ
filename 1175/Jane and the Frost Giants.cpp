#include<bits/stdc++.h>
using namespace std;
string A[201];
int dis[201][201],m1,m2,aaa;
void clr()
{
    int i,j;
    for(i=0;i<=m1;i++)
    {
        for(j=0;j<=m2;j++)
        {
            dis[i][j]=0;
        }
    }
}
bool cheak(int y,int x)
{
    if(y>=0&&y<m1&&x>=0&&x<m2)
        return true;
    else return false;
}
bool cheak1(int y,int x)
{
    if(y>=0&&y<m1&&x>=0&&x<m2&&A[y][x]=='.')
        return true;
    else return false;
}
void bfs1()
{
    int i,j;
    for(i=0;i<m1;i++)
    {
        for(j=0;j<m2;j++)
        {
            if(A[i][j]=='F')
            {
                if(cheak1(i-1,j))
                    A[i-1][j]='f';
                if(cheak1(i+1,j))
                    A[i+1][j]='f';
                if(cheak1(i,j-1))
                    A[i][j-1]='f';
                if(cheak1(i,j+1))
                    A[i][j+1]='f';
            }
        }
    }
     for(i=0;i<m1;i++)
    {
        for(j=0;j<m2;j++)
        {
            if(A[i][j]=='f')
                A[i][j]='F';
        }
    }
}
bool bfs(int j,int k)
{
    queue<int>qx;
    queue<int>qy;
    qx.push(k),qy.push(j);
    dis[j][k]=1;
    while(!qx.empty())
    {
        int x=qx.front(),y=qy.front();
        qx.pop(),qy.pop();
        if(aaa!=dis[y][x])
        {
            bfs1();
            aaa=dis[y][x];
        }
        if(cheak(y-1,x))
        {
            if(A[y-1][x]=='.'&&dis[y-1][x]==0)
            {
                qy.push(y-1),qx.push(x);
                dis[y-1][x]=dis[y][x]+1;
            }
        }
        else return true;
        if(cheak(y+1,x))
        {
            if(A[y+1][x]=='.'&&dis[y+1][x]==0)
            {
                qy.push(y+1),qx.push(x);
                dis[y+1][x]=dis[y][x]+1;
            }
        }
        else return true;
        if(cheak(y,x-1))
        {
            if(A[y][x-1]=='.'&&dis[y][x-1]==0)
            {
                qy.push(y),qx.push(x-1);
                dis[y][x-1]=dis[y][x]+1;
            }
        }
        else return true;
        if(cheak(y,x+1))
        {
            if(A[y][x+1]=='.'&&dis[y][x+1]==0)
            {
                qy.push(y),qx.push(x+1);
                dis[y][x+1]=dis[y][x]+1;
                //cout<<y<<x+1<<endl;
            }
        }
        else return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r",stdin);
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        clr();
        int j,k;
        aaa=-1;
        cin>>m1>>m2;
        for(j=0;j<m1;j++)
            cin>>A[j];
        for(j=0;j<m1;j++)
        {
            for(k=0;k<m2;k++)
            {
                if(A[j][k]=='J')
                {
                    if(bfs(j,k))
                        cout<<"Case "<<i<<": "<<aaa<<endl;
                    else cout<<"Case "<<i<<": IMPOSSIBLE"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
