#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        string A,B;
        cin>>A;
        B=A;
        reverse(B.begin(),B.end());
        if(A==B)
            printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);
    }
    return 0;
}
