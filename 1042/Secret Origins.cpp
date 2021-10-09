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
    int t,ii;
    cin>>t;
    for(ii=1;ii<=t;ii++)
    {
        int n,x=0,y=0,i;
        cin>>n;
        vector<int>vec;
        while(n)
        {
            if(n%2==0)
                vec.push_back(0);
            else vec.push_back(1);
            n=n/2;
        }
        vec.push_back(0);
        reverse(vec.begin(),vec.end());
        next_permutation(vec.begin(),vec.end());
        for(i=vec.size()-1;i>=0;i--)
        {
            if(vec[i]==1)
            {
                y+=pow(2,x);
            }
            x++;
        }
        cout<<"Case "<<ii<<": "<<y<<endl;
    }
    return 0;
}
