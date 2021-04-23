#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        double a,b,c,d,s;
        cin>>a>>c>>b>>d;
        if(b>a)
        {
            double x=a;
            a=b;
            b=x;
        }
        s=(a+b+c+d)/2;
        s=(a+b)/(a-b)*sqrt((s-a)*(s-b)*(s-b-c)*(s-b-d));
        printf("Case %d: %.8lf\n",i,s);
    }
    return 0;
}
