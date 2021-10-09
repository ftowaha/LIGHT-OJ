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
int A[2009];
using namespace std;
void fast_stream() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int bnry_srch(int L,int R,int con)
{
    int mid;
    while(L<R)
    {
        mid=(L+R)/2;
         if(A[mid]<con)
            L=mid+1;
         else R=mid;
    }
    return L;
}
int main()
{
    //freopen("input.txt","r",stdin);
    fast_stream();
    int t;
    cin>>t;
    for(int ii=1;ii<=t;ii++)
    {
        int n,i,cnt=0,j,k;
        cin>>n;
        for(i=1;i<=n;i++)
            cin>>A[i];
        A[n+1]=INT_MAX;
        sort(A+1,A+n+1);
        for(i=1;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int con=A[i]+A[j];
                int idx=bnry_srch(j+1,n+1,con);
                cnt+=idx-(j+1);
            }
        }
        cout<<"Case "<<ii<<": "<<cnt<<endl;
    }
    return 0;
}
