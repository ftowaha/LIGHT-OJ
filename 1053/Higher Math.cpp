#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        long long int A[3];
        scanf("%lld %lld %lld",&A[0],&A[1],&A[2]);
        sort(A,A+3);
        if((A[0]*A[0])+(A[1]*A[1])==A[2]*A[2])
            printf("Case %d: yes\n",i);
        else printf("Case %d: no\n",i);
    }
    return 0;
}
