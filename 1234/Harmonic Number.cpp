#include<bits/stdc++.h>
using namespace std;
const int n = 1e8 + 10;
const int  m = 2e6 + 10;
double A[m];
void seive()
{
    double x=0;
    int y=1,i;
    A[0]=0;
    for( i=1;i<=n;i++)
    {
        x=x+(1.0/i);
        if(i%50==0)
        {
            A[y]=x;
            y++;
        }
    }
    return;
}
int main()
{
    seive();
    //freopen("input.txt","r",stdin);
    int x,i,y,j;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&y);
        j=y/50;
        double z=A[j];
        for(j=j*50+1;j<=y;j++)
        {
            z+=(1.0/j);
        }
        printf("Case %d: %.10lf\n",i,z);
    }
    return 0;
}
