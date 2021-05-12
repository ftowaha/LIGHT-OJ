#include<bits/stdc++.h>
using namespace std;
int vec[10001];
vector<int>graph[10001];
int xxx,yyy;
bool vis[10001];
void bfs(int a)
{
    queue<int>qq;
    qq.push(a);
    xxx=vec[a];
    yyy=1;
    vis[a]=1;
    while(!qq.empty())
    {
        a=qq.front();
        qq.pop();
        for(int i=0;i<graph[a].size();i++)
        {
            int y=graph[a][i];
            //cout<<y<<endl;
            if(vis[y]==0)
            {
                vis[y]=1;
                xxx+=vec[y];
                yyy++;
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
    int t,i,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        int n,m,a,b;
        cin>>n>>m;
        for(i=1;i<=n;i++)
            cin>>vec[i];
        for(i=0;i<m;i++)
        {
            cin>>a>>b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        int aaa=0,bbb=0;
        map<int,int>mp;
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                bfs(i);
                aaa++;
                //cout<<"\t"<<i<<endl;
                if(xxx%yyy==0)
                {
                    mp[xxx/yyy]++;
                    bbb=mp[xxx/yyy];
                }
            }
        }
        //cout<<aaa<<"\t"<<bbb<<endl;
        if(aaa==bbb)
            cout<<"Case "<<j<<": "<<"Yes"<<endl;
        else cout<<"Case "<<j<<": "<<"No"<<endl;
        for(i=0;i<=n;i++)
        {
            vis[i]=0;
            graph[i].clear();
            vec[i]=0;
        }
    }
    return 0;
}
