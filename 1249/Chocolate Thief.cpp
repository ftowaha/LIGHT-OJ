#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("input.txt","r",stdin);
    int n,i,j,z;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        long long int a,b,c,x,y=0;
        cin>>z;
        string A1,A2,A3;
        cin>>A1>>a>>b>>c;
        x=a*b*c;
        y=a*b*c;
        A2=A1;
        A3=A1;
        for(j=1;j<z;j++)
        {
            cin>>A1>>a>>b>>c;
            if(x>a*b*c)
            {
                x=a*b*c;
                A2=A1;
            }
            if(y<a*b*c)
            {
                y=a*b*c;
                A3=A1;
            }
        }
        if(x==y)
            cout<<"Case "<<i<<": no thief\n";
        else cout<<"Case "<<i<<": "<<A3<<" took chocolate from "<<A2<<endl;
    }
    return 0;
}
