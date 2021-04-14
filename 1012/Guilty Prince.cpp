#include<bits/stdc++.h>
using namespace std;
int x,a,b;
string ARR[20];
bool check(int k,int j)
{
    if(j>=0&&j<a&&k>=0&&k<b)
        return true;
    else return false;
}
void dfs(int k,int j)
{
    x++;
    ARR[k][j]='#';
    //printf("%d %d\n",j,k);
    if(check(k-1,j))
    {
        if(ARR[k-1][j]=='.')
            dfs(k-1,j);
    }
    if(check(k+1,j))
    {
        if(ARR[k+1][j]=='.')
            dfs(k+1,j);
    }
    if(check(k,j-1))
    {
        if(ARR[k][j-1]=='.')
            dfs(k,j-1);
    }
    if(check(k,j+1))
    {
        if(ARR[k][j+1]=='.')
            dfs(k,j+1);
    }
    return ;
}
int main()
{
    //freopen("input.txt","r",stdin);
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int j,k;
        x=0;
        scanf("%d %d",&a,&b);
        for(j=0;j<b;j++)
        {
            cin>>ARR[j];
        }
        for(j=0;j<a;j++)
        {
            for(k=0;k<b;k++)
            {
                if(ARR[k][j]=='@')
                {
                    //printf("%d %d\n",j,k);
                    dfs(k,j);
                    break;
                }
            }
        }
        printf("Case %d: %d\n",i,x);
    }
    return 0;
}
