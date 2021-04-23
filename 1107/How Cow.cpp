#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        int n;
        cin>>n;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a<x1||a>x2)
                cout<<"No"<<endl;
            else if(b<y1||b>y2)
                cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
    }
    return 0;
}
