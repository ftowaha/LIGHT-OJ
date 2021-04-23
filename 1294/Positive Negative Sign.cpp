#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        long long int x=0,y=0,a,b,j;
        cin>>a>>b;
        x=a*b/2;
        cout<<"Case "<<i<<": "<<x<<endl;
    }
    return 0;
}
