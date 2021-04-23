#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double r1,r2,h,p,x,y,z;
        cin>>r1>>r2>>h>>p;
        x=r1-r2;
        y=h*r2/x;
        z=h-p;
        x=x*z/h;
        r1-=x;
        x=pi*r1*r1*(p+y)/3;
        z=pi*r2*r2*y/3;
        x=x-z;
        printf("Case %d: %.10lf\n",i,x);
    }
    return 0;
}
