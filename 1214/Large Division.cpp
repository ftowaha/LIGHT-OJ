#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        string A;
        long long int a,j=0,x=0;
        cin>>A>>a;
        a=abs(a);
        if(A[0]=='-')
            j=1;
        for(j=j;j<A.size();j++)
        {
            x=(x*10)+(A[j]-'0');
            x=x%a;
        }
        printf("Case %d: ",i);
        if(x==0)
            printf("divisible\n");
        else
            printf("not divisible\n");
    }
    return 0;
}
