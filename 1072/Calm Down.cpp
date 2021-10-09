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
#define pi                2 * acos(0.0)
using namespace std;
const long long INF = 1ll << 32;
void fast_stream() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast_stream();
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        double a,b,x,y;
        scanf("%lf %lf",&a,&b);
        x=pi/b;
        //sin x= r/(R-r);
        //r=R*sin x- r*sin x
        //r+ r*sin x= R*sin x;
        //r(1+sin x)= R*sin x;
        // r= (1+sin x)/(R*sin x)
        y= (a*sin(x))/(1+sin(x));
        printf("Case %d: %.8lf\n",i,y);
    }
    return 0;
}
