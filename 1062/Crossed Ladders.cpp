#include<bits/stdc++.h>
#define ff                first
#define ss                second
#define pii               pair<int,int>
#define vi                vector<int>
#define mp                make_pair
#define For(i, n)         for (int i = 0; i < n; i++)
#define ll                long long
#define ull               unsigned long long
#define pb                push_back
#define ps                push
#define pf                push_front
#define mp                make_pair
const long long INF = 1ll << 32;
using namespace std;
void fast_stream() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
double check(double mid, double x,double y)
{
    double A=sqrt((x*x)-(mid*mid));
    double B=sqrt((y*y)-(mid*mid));
    //printf("%lf\n",((A*B)/(A+B)));
    return ((A*B)/(A+B));
}
int main()
{
    fast_stream();
    int ii,t;
    scanf("%d",&t);
    for(ii=1;ii<=t;ii++)
    {
        double x,y,c;
        scanf("%lf %lf %lf",&x,&y,&c);
        double L=0,H=min(x,y),mid;
        int cnt=100;
        while(cnt--)
        {
            mid=(L+H)/2;
            //cout<<mid<<endl;
            if(check(mid,x,y)<=c)
                H=mid;
            else L=mid;
        }
        printf("Case %d: %.8lf\n",ii,L);
    }
    return 0;
}
