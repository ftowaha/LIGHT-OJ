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
        long long int a,b,x=0;
        cin>>a>>b;
        if(a%3==1)
        {
            x++;
            a+=2;
        }
        else if(a%3==2)
        {
            x++;
            a++;
        }
        if(b%3==1)
            b--;
        else if(b%3==2)
        {
            b-=2;
            x++;
        }
        a=b-a;
        a=(a/3*2)+1;
        x+=a;
        cout<<"Case "<<i<<": "<<x<<endl;
    }
    return 0;
}
