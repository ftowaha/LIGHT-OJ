#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    //freopen("input.txt","r",stdin);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        double v1,v2,v3,a1,a2,x1,x2;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        x1=v1/a1;
        x2=v2/a2;
        v3=v3*(max(x1,x2));
        x1=((v1*x1)-(0.5*(a1*x1*x1)));
        x2=((v2*x2)-(0.5*(a2*x2*x2)));
        x1=x1+x2;
        printf("Case %d: %.8lf %.8lf\n",i,x1,v3);
    }
    return 0;
}
