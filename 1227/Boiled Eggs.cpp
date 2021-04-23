#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n,p,q;
        cin>>n>>p>>q;
        int b,j,x=0,y=0;
        for(j=0;j<n;j++)
        {
            cin>>b;
            if(x+b<=q&&y+1<=p)
            {
                x+=b;
                y++;
            }
        }
        printf("Case %d: %d\n",i,y);
    }
    return 0;
}
