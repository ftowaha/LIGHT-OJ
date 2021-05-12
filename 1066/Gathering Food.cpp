#include<bits/stdc++.h>
using namespace std;
string A[11],B="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int dis[11][11],n,xxx;
void clr()
{
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                dis[i][j]=-1;
        }
        return;
}
bool cheak(int y,int x)
{
    if(y>=0&&y<n&&x>=0&&x<n&&A[y][x]=='.'&&dis[y][x]==-1)
        return true;
    else return false;
}
bool cheak1(int y,int x)
{
    if(y>=0&&y<n&&x>=0&&x<n&&dis[y][x]==-1)
        return true;
    else return false;
}
int bfs(int y,int x)
{
    int a=1,b=0;
    queue<int>qx;
    queue<int>qy;
    qx.push(x);
    qy.push(y);
    dis[y][x]=0;
    while(!qx.empty())
    {
        x=qx.front();
        y=qy.front();
        qx.pop();
        qy.pop();
        if(cheak(y-1,x))
        {
            dis[y-1][x]=dis[y][x]+1;
            qy.push(y-1);
            qx.push(x);
        }
        else if(cheak1(y-1,x)&&A[y-1][x]==B[a])
        {
            while(!qx.empty())
            {
                qx.pop();
                qy.pop();
            }
            //cout<<x<<y-1<<endl;
            b++;
            xxx+=dis[y][x]+1;
            A[y-1][x]='.';
            clr();
            dis[y-1][x]=0;
            qx.push(x);
            qy.push(y-1);
            a++;
            continue;
        }
        if(cheak(y+1,x))
        {
            dis[y+1][x]=dis[y][x]+1;
            qy.push(y+1);
            qx.push(x);
        }
        else if(cheak1(y+1,x)&&A[y+1][x]==B[a])
        {
            while(!qx.empty())
            {
                qx.pop();
                qy.pop();
            }
            //cout<<x<<y+1<<endl;
            b++;
            xxx+=dis[y][x]+1;
            A[y+1][x]='.';
           clr();
            dis[y+1][x]=0;
            qx.push(x);
            qy.push(y+1);
            a++;
            continue;
        }
        if(cheak(y,x-1))
        {
            dis[y][x-1]=dis[y][x]+1;
            qy.push(y);
            qx.push(x-1);
        }
        else if(cheak1(y,x-1)&&A[y][x-1]==B[a])
        {
           while(!qx.empty())
            {
                qx.pop();
                qy.pop();
            }
            b++;
            //cout<<x-1<<y<<endl;
            xxx+=dis[y][x]+1;
            A[y][x-1]='.';
            clr();
            dis[y][x-1]=0;
            qx.push(x-1);
            qy.push(y);
            a++;
            continue;
        }
        if(cheak(y,x+1))
        {
            dis[y][x+1]=dis[y][x]+1;
            qy.push(y);
            qx.push(x+1);
        }
        else if(cheak1(y,x+1)&&A[y][x+1]==B[a])
        {
            while(!qx.empty())
            {
                qx.pop();
                qy.pop();
            }
            b++;
            //cout<<x+1<<y<<endl;
            xxx+=dis[y][x]+1;
            A[y][x+1]='.';
            clr();
            dis[y][x+1]=0;
            qx.push(x+1);
            qy.push(y);
            a++;
            continue;
        }
    }
    return a;
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
        int j,k,a=0,aa;
        xxx=0;
        cin>>n;
        for(j=0;j<n;j++)
            cin>>A[j];
        clr();
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(A[j][k]>='A'&&A[j][k]<='Z')
                    a++;
            }
        }
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(A[j][k]=='A')
                {
                    A[j][k]='.';
                    aa=bfs(j,k);
                }
            }
        }
        if(aa==a)
            cout<<"Case "<<i<<": "<<xxx<<endl;
        else cout<<"Case "<<i<<": Impossible"<<endl;
    }
    return 0;
}
