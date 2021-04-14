#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double r1,r2,r3,a,b,c,x,y,z,m;
        cin>>r1>>r2>>r3;
        a=r1+r2;
        c=r2+r3;
        b=r3+r1;
        m=(a+b+c)/2;
        m=sqrt(m*(m-a)*(m-b)*(m-c));
        x=acos(((a*a)+(b*b)-(c*c))/(2*a*b));
        y=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
        z=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
        x=x*r1*r1/2;
        y=y*r2*r2/2;
        z=z*r3*r3/2;
        m=m-(x+y+z);
        printf("Case %d: %.8lf\n",i,m);
    }
    return 0;
}
