#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        double ax,ay,bx,by,cx,cy,dx,dy,a,b,c,s;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        a=sqrt(((ax-bx)*(ax-bx))+((ay-by)*(ay-by)));
        b=sqrt(((cx-bx)*(cx-bx))+((cy-by)*(cy-by)));
        c=sqrt(((ax-cx)*(ax-cx))+((ay-cy)*(ay-cy)));
        s=(a+b+c)/2;
        s=sqrt(s*(s-a)*(s-b)*(s-c));
        s=s*2;
        dx=ax+cx-bx;
		dy=ay+cy-by;
        printf("Case %d: %.0lf %.0lf %.0lf\n",i,dx,dy,s);
    }
    return 0;
}
