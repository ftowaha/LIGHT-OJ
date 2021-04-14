#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double A,B,C,x,y,z;
        cin>>A>>B>>C>>x;
        y=(A+B+C)/2;
        y=sqrt(y*(y-A)*(y-B)*(y-C));
        z=y/(x+1);
        z=z*x;
        z=sqrt(A*A*z/y);
        printf("Case %d: %.10lf\n",i,z);
    }
    return 0;
}
