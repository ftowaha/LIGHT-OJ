#include<bits/stdc++.h>
using namespace std;
#define pi 2*acos (0.0)
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        double n;
        cin>>n;
        double x=pi*n*n;
        x=(n*n*4)-x;
        printf("Case %d: %.2lf\n",i,x);
    }
    return 0;
}
