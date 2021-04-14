#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double ox,oy,ax,ay,bx,by,a,b;
        cin>>ox>>oy>>ax>>ay>>bx>>by;
        a=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));
        b=sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));
        ox=((a*a)+(a*a)-(b*b))/(2*a*a);
        ox=acos(ox);
        ox=a*ox;
        printf("Case %d: %.8lf\n",i,ox);
    }
    return 0;
}
