#include<bits/stdc++.h>
using namespace std;
long long int A[10005];
int main() {
    long long int n, i,j,m;
    scanf("%lld", &n);
    for (i = 1; i <= n; ++i) {
        scanf("%lld %lld %lld %lld %lld %lld %lld",&A[0],&A[1],&A[2],&A[3],&A[4],&A[5],&m);
        for(j=6;j<=m;j++)
        {
            A[j]=(A[j-1]+A[j-2]+A[j-3]+A[j-4]+A[j-5]+A[j-6])%10000007;
        }
        printf("Case %lld: %lld\n", i, (A[m]%10000007));
    }
    return 0;
}
